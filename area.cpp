//AREA OF DIFFERENT FIGURES

#include<iostream>
using namespace std;
int main()
{
    int l,b,B,h,a,r,arr,ars;
    float art,arc;
    cout<<"..........FOR RECTANGLE..........\n";
    cout<<"Enter the lenght and width of the rectangle :\n";
    cin>>l>>b;
    arr=l*b;
    cout<<"Area of Rectangle is :"<<arr<<endl;
   
    cout<<"..........FOR TRIANGLE..........\n";
    cout<<"Enter the base and height of the  triangle :\n";
    cin>>B>>h;
    art=0.5*B*h;
    cout<<"Area of Triangle is :"<<art<<endl;

    cout<<"..........FOR SQUARE..........\n";
    cout<<"Enter the side of the square :\n";
    cin>>a;
    ars=a*a;
    cout<<"Area of Square is :"<<ars<<endl;

    cout<<"..........FOR CIRCLE..........\n";
    cout<<"Enter the radius of the circle :\n";
    cin>>r;
    arc=3.14*r*r;
    cout<<"Area of Circle is :"<<arc<<endl;

    return 0;
}