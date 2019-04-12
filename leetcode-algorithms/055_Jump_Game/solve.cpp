    class Solution {
    public:
        bool canJump(vector<int>& nums) {
            int n = nums.size();
            int reach = 1;
            for(int i=0;i<n;i++)
            {
                reach--;
                if(reach<0)
                {
                    return false;
                }
                reach = max(reach,nums[i]);
            }
            return true;
        }
    };