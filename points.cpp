#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter two numbers";
    cin>>x>>y;
    if(x==0 &&y!=0)
    {
        cout<<"the point lies on y axis";
    }
    else if(y==0&&x!=0)
    {
        cout<<"the point lies on x axis";
    }
    else(x==0 && y==0)
    {
        cout<<"the point lies on origin";
    }
    return 0;
}