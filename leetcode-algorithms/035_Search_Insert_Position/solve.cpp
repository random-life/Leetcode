class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       int i = 0;
        if(target>nums[nums.size()-1])
        {
            return nums.size();
        }
        for (i; i<nums.size();i++)
        {
            if(target < nums[i])
            {
                return i;
                break;
            }
            else if (target == nums[i])
            {
                return i;
                break;
            }

        }
    }
};