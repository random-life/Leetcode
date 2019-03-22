class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    	sort(nums.begin(),nums.end());
    	if (nums.size()<3) return 0;
    	int closet = nums[0]+nums[1]+nums[2];

    	for (int first = 0; first<nums.size()-2; first++)
    	{
    		if (first>0&&nums[first]==nums[first-1])
    			continue;
    		int i = first+1;
    		int back = nums.size()-1;

    		while(i<back)
    		{
    			int sum = nums[first]+nums[i]+nums[back];
    			if (sum==target)
    			{
    				return sum;
    			}
    			closet = abs(sum-target)<abs(closet-target)?sum:closet;
    			if (sum>target)
    				back--;
    			else
    				i++;
    		}
    	}
    	return closet;
        
    }
};