#include<iostream>
using namespace std;
int palindrome(string str,int idx,int n)
{
    if(idx>=n-1)
    {
        return 1;
    }
    if(str[idx]==str[n-1])
    return palindrome(str,idx+1,n-1);
    else return 0;
}
int main(){
    string str="racar";
    int n=str.size();
    cout<<palindrome(str,0,n);
}