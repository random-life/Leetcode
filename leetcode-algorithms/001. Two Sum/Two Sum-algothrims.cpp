class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> lookup;
        int N = nums.size();


        for(int i = 0; i < N; i++)
        {
            lookup.insert(pair<int, int>(nums[i], i));
            int value = target - nums[i];
            if(lookup.count(value) && lookup[value] != i)
            {
                vector<int> ret;
                ret.push_back(lookup[value]);
                ret.push_back(i);
                
                return ret;
            }
        }
    }
};