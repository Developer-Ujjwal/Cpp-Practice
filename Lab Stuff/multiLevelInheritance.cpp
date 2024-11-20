#include <iostream>
using namespace std;
class person        //
{
    private: int a_ka_private;          //can't access from outside,   can't be inherited 
    protected: int a_ka_protected;      //can't access from outside,   can be inherited 
    public:                         
    int a_ka_public;                     //can access from outside,   can be inherited 
    void display1(){
        cout<<"\nPerson class";
    }
};
class student : public person
{
    public:
    void display2(){
        cout<<"\nStudent class";
    }
};
class ITStudent : public student
{
    public:
    void display3(){
        cout<<"\nITStudent class";
    }
};
int main()
{
    person p;
    student s;
    ITStudent s1;
    p.display1();
    s.display2();
    s.display1();
    s1.display3();
    s1.display2();
    s1.display1();
    
}