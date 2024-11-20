#include<iostream>
#include<string>
#include<vector>
using namespace std;
void storeSubarray(int arr[],vector<vector<int>>& v,int idx,int n,vector<int> ans)
{
    if(idx==n) {v.push_back(ans);
    return;}
    int ch=arr[idx];
    storeSubarray(arr,v,idx+1,4,ans);
    if(ans.size()==0||arr[idx-1]==ans[ans.size()-1])
    {
    ans.push_back(ch);
    storeSubarray(arr,v,idx+1,4,ans);
    }
    
}


int main(){
    int arr[]={1,2,3,4};
    vector<vector<int>> v;
    vector<int> ans;
    storeSubarray(arr,v,0,4,ans);
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j];
        }
        cout<<endl;
    }
}