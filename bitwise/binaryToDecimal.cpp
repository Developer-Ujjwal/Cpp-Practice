#include<iostream>
using namespace std;
int binary_to_decimal(string str){
    int n=str.length();
    int result =0;
for(int i=n-1;i>=0;i--)
{
    char ch=str[i];
    int num=ch-'0';
    result+= num*(1<<n-i-1);                    //left shift 1<<1 for multiply by 2
}
return result;
}
int main(){
    string str={"01101"};
    cout<<binary_to_decimal(str);
}
