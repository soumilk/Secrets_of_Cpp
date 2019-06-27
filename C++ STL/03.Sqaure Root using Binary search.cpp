//
// Created by soumil on 6/27/2019.
//
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Using the looping method in binary search here
int binarysearch(int n)
{
    int low=0;
    int high=n;
    int mid=0;
    int integral=0;
    while (high>=low)
    {
        mid=(high+low)/2;
        int mul=mid*mid;
        if (mul==n)
        {
            break;
        }
        else if (mul >n)
        {
            high=mid-1;
        }
        else if(mul<n)
        {
            // Here I am storing a integer whose square is just smaller than the number
            if (integral<=mid)
            {
                integral=mid;
            }

            low=mid+1;
        }
    }
    if (mid*mid>n)
    {
        return integral;
    }
    return mid;
}
// In this program we will find out the square root of 72 using binary search!!!
int main()
{
    int n=85472;
    /*
     * Now for the binary search we need to take a upper and a lower bound, so for this the
       lower bound is taken as zero and the upper bound is taken as number itself, we can take
       half of the number as the upper bound as well, but for simplicity we are taking the
       number itself as the upper bound.
     */
    int integral_part=binarysearch(n);
    cout<<"The integral part of the square root of number 85472 is "<<integral_part<<endl;
    /*
     *  So from here we can find out the integral part of the square root of the desired number
     *  If we want to  calculate the decimal part of the number as well up to a certain digits then
        we can run a loop between the digits 0 to 9. The time taken by this looping among 10 numbers
        will take a constant time.
     */

    // now for the decimal part, for one digit after decimal
    double high=integral_part+0.9;
    double low=integral_part+0.0;
    for( ;high>=low ; )
    {
        if (low*low>=n)
        {
            cout<<"Upto one decimal position "<<low<<endl;
            break;
        }
        low+=0.1;
    }
    return 0;
}
