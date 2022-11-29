#include<iostream>
using namespace std;
int main()
{
    int l,b,r,p,a1,a2,cir;
    cout<<"enter the length and breadth of a rectangle";
    cout<<"enter the radius of a circle ";
    cin>>l>>b>>r;
    a1=l*b;
p=2*(l+b);
a2=3.14*r*r;
cir=2*3.14*r;
cout<<"perimeter and area of a rectangle is"<<p<<a1;
cout<<" area and circumference of circle is "<<a2<<cir;
return 0;

}