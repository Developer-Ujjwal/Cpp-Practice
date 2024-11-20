class Solution {
public:
    void helper(vector<int>& candidates, int target, vector<vector<int>>& v,
                vector<int> ans, int idx) {
        if (target == 0) {
            v.push_back(ans);
            return;
        }
        for (int i = idx; i < candidates.size(); i++) {
            if (i != idx and candidates[i] == candidates[i - 1]) {
                continue;
            }
            if (target < candidates[i]) break;
                ans.push_back(candidates[i]);
                helper(candidates, target - candidates[i], v, ans, i + 1);
                ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> ans;
        sort(candidates.begin(), candidates.end());
        helper(candidates, target, v, ans, 0);
        return v;
    }
};