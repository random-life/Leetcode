class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        permuteUnique(res,0,nums);
        return res;
        
    }
    void swap(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    void permuteUnique(vector<vector<int>>&res, int a , vector<int>&nums)
    {
        if(a==nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i=a;i<nums.size();i++)
        {
            
            if(i==a||nums[i]!=nums[i-1])
            {
                //cout<<"i: "<<i;
                swap(nums[a],nums[i]);
                sort(nums.begin()+a+1,nums.end());
                permuteUnique(res, a+1,nums);
                
                swap(nums[a],nums[i]);
                sort(nums.begin()+a,nums.end());
                
            }
        }
    }
};