#include<iostream>
using namespace std;
int gcd(int a,int b)
{   if(b%a==0){return a;}
    else return gcd(b%a,a);
}
int hcf(int a, int b)
{
    for(int i=min(a,b);i>=2;i--)
    {
        if(a%i==0 and b%i==0) return i;
    }
}
int main(){
    cout<<gcd(60,24);
    cout<<hcf(60,24);
}