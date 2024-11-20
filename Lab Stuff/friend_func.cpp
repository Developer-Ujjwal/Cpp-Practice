#include <iostream>
using namespace std;

class sides
{
private:
    int l;
    int w;

public:
    friend int area(sides s);
    void setdata(int a, int b);
};
void sides::setdata(int a, int b)         //outside class
{
    l = a;
    w = b;
}
int area(sides s)
    {
            return s.l * s.w;       //outside class
    }
int main()
{
    sides s1;
    s1.setdata(5, 6);
    cout << area(s1);
    return 0;
}
