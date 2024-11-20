class Solution {
public:
    void helper(vector<int>& candidates, int target,vector<vector<int>>& v,vector<int> ans,int idx)
    {
        if(target<0) return;
        if(target==0) {
            v.push_back(ans);
            return;
        }
        for(int i=idx;i<candidates.size();i++)
       {
        ans.push_back(candidates[i]);
        helper(candidates,target-candidates[i],v,ans,i);
        ans.pop_back();
       }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> ans;
        helper(candidates,target,v,ans,0);
        return v;
    }
};