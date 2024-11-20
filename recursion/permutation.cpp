#include<iostream>
using namespace std;
void permutations(string ans,string original)
{
    if(original[0]=='\0')
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++)
    {
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutations(ans+ch,left+right);
    }
}
int main(){
    permutations("","abcd");

}