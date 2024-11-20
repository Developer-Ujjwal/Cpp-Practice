#include<iostream>
using namespace std;
void binaryString(int n,string str)
{
    if(str.length()==n) {cout<<str<<endl;
    return;}
    binaryString(n,str+'0');
    if(str.length()==0||str[str.length()-1]=='0')
    binaryString(n,str+'1');
}
int main(){
    binaryString(4,"");
}