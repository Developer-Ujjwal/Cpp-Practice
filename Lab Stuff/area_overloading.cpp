#include<iostream>
using namespace std;
#define PI 3.14
float area(float r)
{
    cout<<PI*r*r;
}
float area(float h,float b)
{
    cout<<(h*b)/2;
}
float area(float l, float w, float h)
{
    cout<<l*w*h;
}
int main()
{
cout<<"Area of circle"<<area(5);
cout<<"Area of Triangle"<<area(5,6);
cout<<"Area of Box"<<area(5,6,7);
}
