#include<iostream>
#include<string>
using namespace std;
string skipACharacter(string str,string s,char x,int idx)
{
    if(str[idx]=='\0') return s;
    if(str[idx]!=x) s=s+str[idx];
    return skipACharacter(str,s,x,idx+1);
}

int main(){
    string str="ujjwal kesarwani";
    cout<<skipACharacter(str,"",'a',0);
}