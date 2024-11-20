#include<iostream>
#include<vector>
#include<string>
using namespace std;
void storesubset(string original, string sub, int idx, vector<string> &v, bool flag)
{
    if (original[idx] == '\0')
    {
        v.push_back(sub);
        return;
    }
    char ch = original[idx];
    char dh = original[idx + 1];
    if (flag == false)
    {
        storesubset(original, sub, idx + 1, v, true);
    }
    else if ((idx + 1) == '\0')
    {
        storesubset(original, sub + ch, idx + 1, v, true);
        storesubset(original, sub, idx + 1, v, true);
    }
    else if (ch == dh)
    {
        storesubset(original, sub + ch, idx + 1, v, true);
        storesubset(original, sub, idx + 1, v, false);
    }
    else
    {
        storesubset(original, sub + ch, idx + 1, v, true);
        storesubset(original, sub, idx + 1, v, true);
    }
}

int main()
{
    string str = "aab";
    vector<string> v;
    storesubset(str, "", 0, v,true);
    for(string ele : v)
    {
        cout << ele << endl;
    }
}
/*class Solution {
public:
void storesubset(vector<int>& nums, vector<int> sub, int idx, vector<vector<int>> &v, bool flag)
{
    sort(nums.begin(),nums.end());
    if (idx==nums.size())
    {
        v.push_back(sub);
        return;
    }
    int ch = nums[idx];
    if ((idx + 1) ==nums.size())
    {
        storesubset(nums, sub, idx + 1, v, true);
        if(flag==true){
        sub.push_back(ch);
        storesubset(nums, sub, idx + 1, v, true);}
    }
    else if (ch == nums[idx+1])
    {
        storesubset(nums, sub, idx + 1, v, false);
        if(flag==true){
        sub.push_back(ch);
        storesubset(nums, sub, idx + 1, v, true);}
    }
    else
    {
        storesubset(nums, sub, idx + 1, v, true);
        if(flag==true){
        sub.push_back(ch);
        storesubset(nums, sub, idx + 1, v, true);}
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> sub;
        vector<vector<int>> v;
        storesubset(nums,sub,0,v,true);
        return v;
    }
};*/