#include <iostream> 
using namespace std;
class Number { 
    float a;
    float b;
    public : 
    Number()
    {
        a=7.8;
        b=2.2;
    }
    Number(float x,float y)
    {
        a=x;
        b=y;
    }
    Number(Number &N)
    {
        a=N.a;
        b=N.b;
    }
    void display(){
        cout<<a<<"  "<<b<<endl;
    }
} ; 

int main() { 
    Number N1,N2(7.1,2.9),N3(N2);
    N1.display();
    N2.display();
    N3.display();
  return 0; 
} 


