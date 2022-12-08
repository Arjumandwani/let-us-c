#include<iostream>
using namespace std;
struct employee{
    int employee_number;
    int employee_compensation;
};
int main(){
employee e1,e2,e3;
cout<<"enter the first  employee number";
cin>>e1.employee_number;
cout<<"enter the first employee compensation";
cin>>e1.employee_compensation;
cout<<"enter the second employee number";
cin>>e2.employee_number;
cout<<"enter the second employee compensation";
cin>>e2.employee_compensation;
cout<<"enter the third employee number";
cin>>e3.employee_number;
cout<<"enter the third employee compensation";
cin>>e3.employee_compensation;
cout<<"displaying the information of employee";
cout<<"the first employee number  "<<e1.employee_number<<"\t"<<"employee compensation"<<e1. employee_compensation;
cout<<"the second employee number  "<<e2.employee_number<<"\t"<<"employee compensation"<<e2.employee_compensation;
cout<<"the third employee number "<<e3.employee_number<<"\t"<<"employee compensation"<<e3.employee_compensation;
return 0;}