class Solution {
public:
int first(int start, int end, vector<int>& nums, int target){
    if(end-start <= 1) 
    if(nums[start]==target||nums[end]==target)return nums[start]==target?start:end;
    else return -1;
    int mid = (start+end)/2;
    if(nums[mid]<target) return first(mid,end,nums,target);
    else return first(start, mid,nums,target);

}
int last(int start, int end, vector<int>& nums, int target)
{
    if(end-start <= 1) 
    if(nums[start]==target||nums[end]==target)
    return nums[end]==target?end:start;
    else return -1;
    int mid = (start+end)/2;
    if(nums[mid]>target) return last(start,mid, nums, target);
    else return last(mid, end,nums,target);
}
 vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> range;
    if(nums.size()==0)
    { 
      range.push_back(-1);
      range.push_back(-1);
     
        return range ;
    }
     if(nums.size()==1)
     {
         if(nums[0]==target)
         {
            range.push_back(0);
            range.push_back(0);
             
         }
         else
         {
             range.push_back(-1);
             range.push_back(-1);
         }
         return range;
     }
    int first1 = first(0, nums.size()-1, nums, target);
    int last1 = last(0, nums.size()-1, nums, target);
    
    
    range.push_back(first1);
    range.push_back(last1);
    return range;
}
};