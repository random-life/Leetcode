class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        if(n<2)
        {
            return 0;
        }
        int i = 0, level=0,currentMax=nums[0];
        int current = currentMax;
        while(currentMax<n-1)
        {
            level++;
            for(; i<=current;i++)
            {
                if(i>=nums.size()-1)
                {
                    return level;
                }
                currentMax = max(i+nums[i], currentMax);
                
            }
            current = currentMax;
            //cout<<currentMax<<endl;
        }
        return level+1;
    }
};