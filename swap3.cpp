//SWAPING TWO NUMBERS WITHOUT USING THIRD VARIABLE 

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the two numbers :"<<endl;
    cin>>a>>b;
    cout<<"numbers before swapping : \n  First number :"<<a<<endl<<" Second number :"<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"numbers  after swapping : \n  First number :"<<a<<endl<<" Second number :"<<b<<endl;
    return 0;
}