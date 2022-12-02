#include<iostream>
using namespace std;
int main()
{
    int a,b,area,peri;
    cout<<"enter the length and breadth of a rectangle";
    cin>>a>>b;
    area=a*b;
    peri=2*(a+b);
cout<<"the area and perimeter of a rectangle is "<<area<<peri;
if(area>peri)
{
    cout<<"area is greater than perimeter";
}    
else
{
    cout<<"perimeter is greater than area";
}
return 0;
    
}