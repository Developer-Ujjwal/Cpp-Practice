#include<iostream>
using namespace std;
int display(int a)
{
    cout<<a<<endl;
}
int display(int a, int b)
{
    cout<< a <<" " << b <<endl;
}
int main()
{
    display(34);
    display(35,65);
}