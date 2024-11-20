#include<iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(int x)
    {
        a=x;
    }
    void disp()
    {
        cout<<a<<endl;
    }
    void operator ++(){
        cout<<"preincrement of number is "<<++a<<endl;
    }
    void operator ++(int){
        cout<<"postincrement of number is "<<a++<<endl;
    }
};
int main(){
    Number N(5);
    ++N;
    N++;
    N.disp();
}