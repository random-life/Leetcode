class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> combination;
        sort(candidates.begin(), candidates.end());
        combinationSum2(candidates, combination, res, target, 0);
        sort(res.begin(),res.end());
        res.erase(unique(res.begin(),res.end()),res.end());
        return res;
    }
    void combinationSum2(vector<int>& candidates, vector<int>&combination, vector<vector<int>>& res,int target, int begin)
    {
        if(!target)
        {
            res.push_back(combination);
            return;
        }
        for(int i=begin;i!=candidates.size()&&target>=candidates[i]; ++i)
        {
              combination.push_back(candidates[i]);
                
                combinationSum2(candidates,combination, res, target-candidates[i],i+1);
                combination.pop_back();
            
        }
    }
};