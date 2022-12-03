#include<iostream>
using namespace std;
int main(){
    int div,sub;
    cout<<"enter the class obtained by the student";
    cin>>div;
    cout<<"enter the number of subject in which he has failed";
    cin>>sub;
    switch(div)
    {
        case 1:
        if(sub<=3)
        {
            cout<<"he got the grace marks "<<5*sub;

        }
        else
{
    cout<<"he didnt get any grace marks";
}
break;
case 2:
if(sub<=2)
{
    cout<<"he got the grace marks "<<2*sub;
}
else
{
    cout<<"he didnt get any grace";
} 
break;
case 3:
if(sub<=1)
{
    cout<<"he got the grace marks "<<5*sub;
}   
else
{
    cout<<"he didnt get any grace marks";
}
break;}
return 0;
}