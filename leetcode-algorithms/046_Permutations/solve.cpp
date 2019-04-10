class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
 
        permute2(nums,  0,res);
        return res;
        
    }
    void swap(int&a ,int &b)
    {
        int temp = a;
        a = b ;
        b = temp;
    }
    void permute2(vector<int>& nums, int a , vector<vector<int>>& res)
    {
        if(a==nums.size()-1)
        {
            //cout<<"a="<<a<<endl;
           
            res.push_back(nums);

            return;
        }
        
        for(int i = a; i<nums.size();i++ )
        {
            
            swap(nums[a],nums[i]);
            
            
            
            permute2(nums,  a+1,res);
            swap(nums[a],nums[i]);
        }
    }
};