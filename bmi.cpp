#include<iostream>
using namespace std;
int main(){
    int BMI,w,h;
    cout<<"height and weight of a person";
    cin>>h>>w;
    BMI=w/(h*h);
    if(BMI<15)
    {
        cout<<"starvation";
    }
    else if(BMI>=15.1 && BMI<=17.5)
    {
        cout<<"anoxeric";
    }
    else if(BMI>=17.6 && BMI<=18.5)
    {
        cout<<"underweight";
    }
    else if(BMI>=18.6 && BMI<=24.9)
    {
        cout<<"ideal";
    }
    else if(BMI>=25 && BMI<=25.9)
    {
        cout<<"overweight";
    }
    else if(BMI>=30 && BMI<=30.9)
{
    cout<<"obese";
}
else if(BMI>=40){
    cout<<"morbidly obese";

}
return 0;
}