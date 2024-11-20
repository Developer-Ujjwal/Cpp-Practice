#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printsubset(string original,string sub,int idx)
{
    if(original[idx]=='\0') {cout<<sub<<endl;
    return;}
    char ch=original[idx];
    printsubset(original,sub+ch,idx+1);
    printsubset(original,sub,idx+1);                                     
    
}
void storesubset(string original,string sub,int idx,vector<string> &v)
{
    if(original[idx]=='\0') {v.push_back(sub);
    return;}
    char ch=original[idx];
    storesubset(original,sub+ch,idx+1,v);
     //for array v.push_back(ch);
    storesubset(original,sub,idx+1,v);
    
}


int main(){
    string str="aab";
    vector<string> v;
    printsubset(str,"",0);
    storesubset(str,"",0,v);
    for(string ele:v)
    {
        cout<<ele<<endl;
    }
}