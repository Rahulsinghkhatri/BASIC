//SUBTRTACTION OF TWO NUMBERS

#include<iostream>
using namespace std;
int main()
{
    int a,b,sub;
    cout<<"Enter the two numbers : \n";
    cin>>a>>b;
    if(a>b)
    {
        sub=a-b;
    }
    else
    {
        sub=b-a;
    }
    cout<<"Difference of the numbers is :"<<sub<<endl;
    return 0;
}