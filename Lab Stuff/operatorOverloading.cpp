//overloading unary operator -negative value of the data member
#include<iostream>
using namespace std;
class unary{
    int x,y,z;
    public:
    unary(){
        x=y=z=0;
    }
    unary(int a,int b,int c)
    {
        x=a;y=b;z=c;
    }
    void display(){
        cout<<"\nx="<<x<<",y="<<y<<",z="<<z;
    }
    void operator-();
};
void unary::operator-(){
    x=-x;
    y=-y;
    z=-z;
}
int main(){
    unary u1(5,4,3);
    u1.display();
    -u1;
    u1.display();
    return 0;
}