#include<iostream>
using namespace std;
int *function();

int main()
{
    int *(*ptr)();
    ptr=& function;
    auto *x=ptr();
    cout<<*x<<endl;
    return 0;
}
int *function()
{
    static int a =10;
    return &a;
}
