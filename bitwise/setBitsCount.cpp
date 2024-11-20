#include<iostream>
using namespace std;
int countSetBit(int num)
{
    return __builtin_popcount(num);
}
int countSetBit2(int num)
{
    int count=0;
    while(num>0)
    {
        num=num&(num-1);
        count++;
    }
    return count;
}
int main()
{
    cout<<countSetBit2(13)<<endl;
    cout<<countSetBit(13);
}