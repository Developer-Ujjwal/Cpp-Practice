#include<iostream>
using namespace std;
class A{
    public:
   virtual void show(){
        cout<<"A ka show call hua"<<endl;
    }
};
class B:public A{
    public: 
    void show(){
        cout<<"B ka show call hua"<<endl;
    }
};

int main(){
    A* A1;
    B B1;              //without virtual 
    A1=&B1;           // Andar B ka address store h phir bhi A ka show call hua #during compile binding it is already stored in stack memory that it store address of class A
    A1->show();         //after writing virtual; B ka show call hua #run time binding came on background vptr and vtable have been created
}