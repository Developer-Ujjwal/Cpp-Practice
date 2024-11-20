#include<iostream>
using namespace std;
int maze(int er,int ec)
{
    if(er<1||ec<1) return 0;
    if(er==1 &&ec==1) return 1;
    int rightways=maze(er,ec-1);
    int downways=maze(er-1,ec);
    int totalways=rightways+downways;
    return totalways;
}
void printpath(int er,int ec,string s)
{
     if(er<1||ec<1) return;
    if(er==1 &&ec==1) cout<<s<<endl;
    printpath(er,ec-1,s+'r');
    printpath(er-1,ec,s+'d');
}
int main(){
    cout<<maze(3,3);
    printpath(3,3,"");
    return 0;
}