#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str="dcbaefghi";
    int n=str.length();
    reverse(str.begin(),(str.begin()+n/2));
    cout<<str;
}