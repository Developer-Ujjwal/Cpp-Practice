#include<iostream>
using namespace std;


class Shape{                        //abstract class 
    protected: 
    float x;
    public:
    void getData(){
        cin>>x;
    }
    virtual float calculateArea()=0;

};
class Square : public Shape{
    public: 
    float calculateArea(){
        return x*x;
    }
};
class Circle : public Shape{
    public: 
    float calculateArea(){
        return 3.14*x*x;
    }
};
int main()
{
    return 0;
}
