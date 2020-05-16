/*
* This program is the implementation of POW(x,n) operator in C++, here the x is the number and n is the power of the number
* Where:
  -100.0 < x < 100.0
  n is a 32-bit signed integer, within the range [−231, 231 − 1]
*/

double myPow(double x, int n) {
    if(n==0) return 1;

    double ans = myPow(x,n/2);
    ans=ans*ans;
    if(n>0){
        if(n&1){
        ans = ans *x;
        }
    }
    if(n<0){
        if(n&1){
            ans=ans* (1/x);
        }
    }
    return ans;
}
