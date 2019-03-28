class Solution {
public:
    void nextPermutation(vector<int>& nums) {
         auto pa = nums.rbegin();
        for(auto iter =nums.rbegin();iter!=nums.rend()-1;iter++)
        {
            if (*(iter+1)<*iter)
            {
                pa = iter+1;
              
                //cout<<*pa;
                  break;
            }
        }
        if(pa ==nums.rbegin())
        {
            sort(nums.begin(),nums.end());
            return ;
        }
        for(auto iter=nums.rbegin();iter!=pa;iter++)
        {
            if (*iter > *pa)
            {
                swap(*iter,*pa);
                reverse(nums.rbegin(),pa);
                return;
            }
        }
    }
};