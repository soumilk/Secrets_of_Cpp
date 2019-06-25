#include<iostream>
#include<algorithm>
// Sort is a part of standard  namespace so instead of writting std::sort, we can use the std namespace to 
// call it simply sort
using namespace std;

bool compare_dec(int a,int b)
{
    return a>b; // to sort in decreasing order 
}

bool compare_inc(int a,int b)
{
    return a<b; // to sort in the increasing order
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int a[]={1,5,2,9,12,11,97,43,87};
    int a1[]={1,5,2,9,12,11,97,43,87};
    int a2[]={1,5,2,9,12,11,97,43,87};
    // this is a general method to find the length of the array by dividing the total size of the array 
    // by the size of a single element.
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"Output in increasing order"<<endl;
    sort(a,a+n);        //similar to because we are in std namespace std::sort(a,a+n);
    /*
    remember indexing is started by 0, this is of the form sort [a,a+n) i.e. last index is excluded, 
    std::sort(base_address, base_address+n,optional: comparator_function_pointer)
    */
    print(a,n);
    
    cout<<"Sorting only the first 3 elements of the array"<<endl;
    // In this case, only first 3 elements of the array are sorted, i.e. index(0,1,2,3)
    sort(a1,a1+3);
    print(a1,n);
    
    cout<<"Sorting in the decreasing order using comparator_dec function"<<endl;
    /* 
    We can provide our custom function to define the sorting mechanism of the array
    here we have provided a function pointer to the inbuilt sorting function, and this function
    do the sorting according to our sorting function, the custom comparator function returns the 
    bool value which is defined on the condition we want to be satisfied for sorting.
    */
    sort(a2,a2+n,compare_dec);
    print(a2,n);
    
    /*
    After providing a comparator function, the functionality of the sort function changes to compare_dec(a2[j],a2[j+1]), so the
    condition to sort the array is now dependes upon this funtion.
    NOTE: We are not calling the function, i.e. we are not doing this => sort(a,a+n,compare_dec()), we are just passing the 
    function as an argument to the sort function.
    */
    cout<<"Sorting in the decending order using comparator_inc function"<<endl;
    sort(a2,a2+n,compare_inc);
    print(a2,n);
    return 0;
}
