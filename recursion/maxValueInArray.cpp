#include <iostream>
using namespace std;
void maxValue(int *arr, int n, int idx, int max)
{
    if (idx == n)
    {
        cout << max;
        return;
    }
    if (arr[idx] > max)
        max = arr[idx];
    maxValue(arr, n, idx + 1, max);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    maxValue(arr, 7, 0, INT8_MIN);
}