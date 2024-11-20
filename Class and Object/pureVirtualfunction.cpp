#include<iostream>
using namespace std;
class A{                        //this class is known as abstract class as it contain atleast one pure virtual function
                                //object of this class can't be created
                                //this class is like interface for other derived classes
    int a;
    public:
    void display(){
        cout<<"display";
    }
   virtual void show()=0;               //pure virtual function it ensures that every derived class must contain this function if the function is not created it will show error 
};
class B:public A{
    public: 
    void show(){
        cout<<"B ka show call hua"<<endl;
    }
};

int main(){
    // A A1 not allowed
    B B1;
}
