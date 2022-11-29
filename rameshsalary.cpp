#include<iostream>
using namespace std;
int main()
{float basic_salary,dallowance,house_rent,gross_salary;
cout<<"enter the basic salary";
cin>>basic_salary;
dallowance=0.4*basic_salary;
house_rent=0.2*basic_salary;
gross_salary=basic_salary+dallowance+house_rent;
cout<<"basic salary is "<<basic_salary;
cout<<"dearness allowance is "<<dallowance;
cout<<"house rent is "<<house_rent;
cout<<"Gross salary is "<<gross_salary;
return 0;

}