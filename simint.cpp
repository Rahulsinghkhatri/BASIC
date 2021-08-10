//SIMPLE INTEREST

#include<iostream>
using namespace std;
int main()
{
    float p,r,t,si;
    cout<<"Enter the principle amount :\n";
    cin>>p;
    cout<<"Enter the rate :\n";
    cin>>r;
    cout<<"Enter the time(years) :\n";
    cin>>t;
    si=(p*r*t)/100;
    cout<<"Simple interest is :"<<si;
    return 0;
}