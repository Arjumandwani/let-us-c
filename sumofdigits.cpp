
#include<iostream>
using namespacestd;
int main()
{
    int n,sum=0;
    cout<<"\n enter number to find sum of digits";
    cin>>n;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    cout<<"\n sum of digits="sum;
    return 0;
}