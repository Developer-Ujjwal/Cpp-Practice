#include<iostream>
using namespace std;
class Animal{
    int legs=4;
    public:
    void display1(){
        cout<<"\nlegs="<<legs;
    }
};
class Dog: public Animal{
    bool tail=true;
    public:
    void display2(){
        cout<<"\nTail="<<tail;
    }
};
int main(){
    Dog d1;
    d1.display1();
    d1.display2();
}