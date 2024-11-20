#include<iostream>
#include<vector>
using namespace std;
void generateP(vector<string>& str,int n,int o,int e,string st)
{
    if(e==n) {
        str.push_back(st);
        return;}
    if(o<n){ 
        generateP(str,n,o+1,e,st+'(');
        }
    if(e<o) {
        generateP(str,n,o,e+1,st+')');
            
    }
}
int main(){
    vector<string> str;
    generateP(str,4,0,0,"");

    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<endl;
    }
}