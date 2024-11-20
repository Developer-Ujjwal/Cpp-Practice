//find the maximum power of 2 that is smaller than n
#include<iostream>
using namespace std;
int maxPower(int n)
{
    int temp;
    while(n!=0)
    {
        temp=n;             // new concept
        n=n&(n-1);
        
    }
    return temp;
}
int maxPower2(int n)
{
    n=n|(n>>1);
    n=n|(n>>2);
    n=n|(n>>4);
    n=n|(n>>8);
    n=n|(n>>16);
    n++;
    n=n>>1;
    return n;
}
int main()
{
    cout<<maxPower(10)<<endl;
    cout<<maxPower2(10);
}