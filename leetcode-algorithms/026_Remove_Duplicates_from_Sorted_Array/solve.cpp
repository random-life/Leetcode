class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> ma;
        for (int i=0; i<nums.size();i++)
        {
            ma[nums[i]]=i;
        }
        
        auto iter = ma.begin();
        int i = 0;
        while(iter!=ma.end())
        {
            nums[i++] = iter++->first;
            
            
        }
        return ma.size();
    }
};