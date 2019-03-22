class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        std::sort(nums.begin(), nums.end());
        for(int i=0; i < nums.size(); i++)
        {
            int target3 = target - nums[i];
            for(int j = i+1;j < nums.size();j++)
            {
                int target2 = target3 - nums[j];
                int front = j+1;
                int back = nums.size()-1;
                while(front < back)
                {
                    int sum = nums[front] + nums[back];
                    if (sum < target2)
                    {
                        front++;
                    }
                    else if(sum > target2)
                    {
                        back--;
                    }
                    else {
                        vector<int> four(4,0);
                        four[0] = nums[i];
                        four[1] = nums[j];
                        four[2] = nums[front];
                        four[3] = nums[back];
                        res.push_back(four);
                        while(front < back && nums[front]==four[2]) front++;
                        while(front < back && nums[back]==four[3]) back--; 
                    }
                    
                }
                while(j<nums.size()&-1&nums[j+1]==nums[j]) j++;

            }
            while(i<nums.size()-1&&nums[i+1]==nums[i]) i++;
        }
        return res;
    }
};