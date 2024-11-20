#include<iostream>
using namespace std;
class liquid{
public:
void display1(){
    cout<<"\nLiquid Class";
}
};
class fuel{
public:
void display2(){
    cout<<"\nFuel Class";
}
};
class petrol:public liquid,public fuel{
public:
void display3(){
    cout<<"\nPetrol Class";
}
};
int main(){
liquid l;
fuel f;
petrol p;
l.display1();
f.display2();
p.display3();
p.display2();
p.display1();
}