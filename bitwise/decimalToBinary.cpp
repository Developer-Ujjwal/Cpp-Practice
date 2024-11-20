#include<iostream> 
using namespace std;
string decimal_to_Binary(int num){
    string result;

    while(num>0)
    {
        if(num%2==0)
        {
            result="0"+result;
        }
        else result="1"+result;

       num= num>>1;                                         // right shift 1>>1=1/2^1         1>>2=1/2^2           for divide by 2
    }
    return result;
}
int main(){
    int num=8;
    cout<<decimal_to_Binary(num);
}