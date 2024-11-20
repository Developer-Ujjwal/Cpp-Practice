// overloading unary operator --data member
#include <iostream>
using namespace std;
class unary
{
    int x, y, z;

public:
    unary()
    {
        x = y = z = 0;
    }
    unary(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    void display()
    {
        cout << "x=" << x << ",y=" << y << ",z=" << z << endl;
    }
    void operator--();
    void operator--(int);
};
void unary::operator--() // prefix;
{
    --x;
    --y;
    --z;
}
void unary::operator--(int) // postfix;
{
   x--;
   y--;
   z--;
}

int main()
{
    unary u1(5, 4, 3);
    u1.display();
    --u1;
    u1.display();
    u1--;
    u1.display();

    return 0;
}