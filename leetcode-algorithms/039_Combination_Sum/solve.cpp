class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combination;
        sort(candidates.begin(),candidates.end());
        combinationsum1(candidates,combination,res,target,0);
        return res;
    }
    void combinationsum1(vector<int>&candidates,vector<int>&combination,vector<vector<int>>&res, int target,int begin)
    {
        if (!target)
        {
            res.push_back(combination);
            return;
        }
        for (int i = begin;i!=candidates.size()&&target>=candidates[i];++i)
        {
            
                combination.push_back(candidates[i]);
                combinationsum1(candidates,combination,res,target-candidates[i],i);
                combination.pop_back();
            
        }
    }
};