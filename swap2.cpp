//SWAPING TWO NUMBERS USING THIRD VARIABLE BASIC METHOD

#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter the two numbers :"<<endl;
    cin>>a>>b;
    cout<<"numbers before swapping : \n  First number :"<<a<<endl<<" Second number :"<<b<<endl;
    temp=a+b;
    a=temp-a;
    b=temp-b;
    cout<<"numbers  after swapping : \n  First number :"<<a<<endl<<" Second number :"<<b<<endl;
    return 0;
}