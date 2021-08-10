//PERCENTAGE OF MARKS IN 5 SUBJECTS

#include<iostream>
using namespace std;
int main()
{
    float m1,m2,m3,m4,m5,per;
    cout<<"Enter the marks of 5 subjects out of 100: \n";
    cin>>m1>>m2>>m3>>m4>>m5;
    per=((m1+m2+m3+m4+m5)/500)*100;   //(m1+m2+m3+m4+m5)/5;
    cout<<"Percentage of marks is :"<<per<<endl;
    return 0;
}