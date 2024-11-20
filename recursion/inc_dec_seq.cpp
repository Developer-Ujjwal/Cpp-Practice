#include<iostream>
using namespace std;
void seq(int i,int n)
{
    cout<<i<<" ";
    if(i==n)
    {
        return;
    }
    seq(i+1,n);
    cout<<i<<" ";
}
int main(){
    int n;
cin>>n;
seq(1,n);
}