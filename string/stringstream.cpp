#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main(){
        string str="12,45,34,169";
    stringstream ss(str);
    int temp;
    char ch;
    vector<int> a;
    while(ss>>temp)
    {
        a.push_back(temp);
        ss>>ch;
    }       
    cout<<ss.end;
    // cout<<a[2];

    // //to_string
    // int a=12;
    // int b=42;
    // int d=22;
    // char c=',';
    // stringstream s;
    // s<<a<<c<<b<<c<<d;
    // cout<<s.str();

}