#include<iostream>
using namespace std;
int main()
{
    float a,b,c,d,e,f;
    float g;
    cout<<"enter the marks of the ist subject";
    cin>>a;
    cout<<"enter the marks of the second subject";
    cin>>b;
    cout<<"enter the marks of the third subject";
    cin>>c;
    cout<<"enter the marks of the fourth subject";
    cin>>d;
    cout<<"enter the marks of the fifth subject";
    cin>>e;
    f=(a+b+c+d+e+f/5);
    g=((a+b+c+d+e)/500)*100;
    cout<<"aggregate marks is "<<f;
    cout<<"percentage marks is "<<g;
    return 0;
}