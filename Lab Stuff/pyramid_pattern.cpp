
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a Number ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
