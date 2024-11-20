#include<iostream>
using namespace std;
class complex
{
    int real;
    int imag;
    public:
    complex(){
     real=0; imag=0;
    }
    complex(int x,int y){
     real=x; imag=y;
    }
    void disp(){
     cout<<"\nreal value="<<real<<endl;
     cout<<"imag value="<<imag<<endl;
    }
    friend complex operator +(complex c,complex x);

};
complex operator +(complex c,complex x)
{
    complex temp;
    temp.real=x.real+c.real;
    temp.imag=x.imag+c.imag;
    return temp;
}
int main(){
    complex c1(3,5),c2(4,5),c3;
    c3=c1 + c2;
    c3.disp();

}