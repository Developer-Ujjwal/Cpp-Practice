#include<iostream>
using namespace std;
class A{
    public:
    int a_ka_public;
};
class B:virtual public A{
    public:
    int b_ka_public;
};
class C:virtual public A{
    public:
    int c_ka_public;
};
class D:public B,public C{
    public:
    int d_ka_public;
};


int main(){
    D d1;
    //d.a_ka_public;        error
    // compiler is confused that d1 is calling b wala a_ka_public ya c wala a_ka_public;
    // To resolve either use scope operator or using virtual before class
    // d1.B::a_ka_public;  using scope
    d1.a_ka_public=5;            //using virtual before classes
    cout<<d1.a_ka_public;

}