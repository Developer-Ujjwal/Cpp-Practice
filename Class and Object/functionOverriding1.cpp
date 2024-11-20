#include<iostream>
using namespace std;
class A{

    public: 
    void show()
    {
        cout<<"A ka show call hua"<<endl;
    }

};
class B:public A{

    public: 
    void show()
    {
        cout<<"B ka show call hua"<<endl;
    }

};

int main(){
    B b1;
    b1.show();          //b ka show call hua
    A a1;
    a1.show();          //a ka show call hua
    b1.A::show();          //a ka show call hua
    

}