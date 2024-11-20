#include<iostream>
using namespace std;
class A{
    int value;
    public :
    
    A(int a=0) : value(a) {}
    void set(int a)
    {
        value=a;
    }
    void get()
    {
        cout<<value<<endl;
    }
};
int main()
{
    A a1(50);
    A a2;
    a2=a1;
    a2.get();
    a1.set(10);
    a2.get();
    a1.get();
    return 0;

}