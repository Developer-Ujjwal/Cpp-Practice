#include <iostream>
using namespace std;
int sum(int a, int b)
{
    if (b < a)
        return 0;
    if (a % 2 == 0)
    {
        a = a + 1;
        return a + sum(a + 2, b);
    }

    return a + sum(a + 2, b);
}
int main()
{
    cout << sum(6, 9);
}