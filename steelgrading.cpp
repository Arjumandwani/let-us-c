#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"enter the hardness,carbon content, tensile strength";
    cin>>a>>b>>c;
    if(a>50 && b<0.7 && a>5600)
    {
        cout<<" grade 10";
    }
    else if(a>50 && b<0.7)
    {
        cout<<" grade 9";
    }
    else if(b<0.7&& c>5600)
    {
        cout<<"grade 8";
    }
    else if(a>50 && c>5600)
    {
        cout<<"grade 7";
    }
    else if(a>50||b<0.7||c>5600)
    {
        cout<<"grade 6";
    }
    else 
    {
        cout<<"grade 5";
    }
    return 0;
}