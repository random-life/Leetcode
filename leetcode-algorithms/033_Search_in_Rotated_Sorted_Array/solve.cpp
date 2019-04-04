class Solution {
public:
    int divide(vector<int>& nums,int left, int right)
    {
        int mid = (left+right)/2;
        if(left ==right)
            return left;
        if(nums[mid]>nums[right])
            return divide(nums,mid+1,right);
        else return divide(nums,left,mid);
    }
    int find_re(vector<int>& nums, int left, int right, int target,int minst, int len)
    {
        int mid = (left+right)/2;
        int realmid = (mid+minst)%len;
        //cout<<"left "<<left<<"right "<<right<<"mid "<<mid<<"realmid "<<realmid<<endl;
        if(nums[realmid]==target)
        {
            return realmid;
        }
        if(left >= right)
            return -1;
        if(nums[realmid]<target)
             return find_re(nums,mid+1,right,target,minst,len);
        else return find_re(nums,left,mid-1,target,minst, len);
    }
    int search(vector<int>& nums, int target) {
        if(nums.size()==0)
        {
            return -1;
        }
        int minst;
        minst= divide(nums,0,nums.size()-1);
        //cout<<minst;
        int re = find_re(nums,0,nums.size()-1,target,minst, nums.size());
        return re;
    }
};