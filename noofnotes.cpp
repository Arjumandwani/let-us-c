#include<iostream>
using namespace std;
int main()
{
    int amount,hun,fif,ten,five,two,one;
    cout<<"enter the amount";
    cin>>amount;
    hun=amount/100;
    amount=amount%100;

    fif=amount/50;
    amount=amount%50;

    ten=amount/10;
    amount=amount/10;

    five=amount/5;
    amount=amount%5;

    two=amount/2;
    amount=amount%2;

    one=amount/1;
    amount=amount%1;
total=hun+fif+ten+five+two+one;
cout<<"total number of notes is ",total;
return 0;
}

}