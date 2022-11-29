#include<iostream>
using namespace std;
int main()
{float a, km,m,cm,f,in;
    cout<<"enter the distance in km";
    cin>>a;
    m=1000*km;
    cm=1000*100*km;
    f=3280.84*km;
    in=39370.08*km;
cout<<"distance in feet is "<<f;
cout<<"distance in inches is "<<in;
cout<<"distance in meters is "<<m;
cout<<"distance in centimeters is "<<cm;
return 0;

}