class Solution {
public:
    void quicksort(vector<int> &nums,int l, int r)
	{
		if (l>=r)
		{
			return;
		}
		int i=l,j=r,x= nums[l];
		while(i<j)
		{
			while(i<j&&nums[j]>=x)
			j--;
			if (i<j)
			{
				nums[i++]=nums[j];
			}
			while(i<j&&nums[i]<=x)
			{
				i++;
			}
			if (i<j)
			{
				nums[j--]=nums[i];
			}
		}
		nums[i]=x;
		quicksort(nums,l,i-1);
		quicksort(nums,i+1,r);
		

	}
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2)
	{
		vector<int> final_nums;
		final_nums.insert(final_nums.end(),nums1.begin(),nums1.end());
		final_nums.insert(final_nums.end(),nums2.begin(),nums2.end());
		int len_final = final_nums.size();
        
		quicksort(final_nums,0,len_final-1);
		int mod = len_final%2;
		int s = len_final / 2;
		if (mod==0)
		{
			double re ;
			re = (final_nums[s-1]+final_nums[s])/2.0;
			return re;
		}
        
		else
		{
			double re;
			re = final_nums[s];
			return re;
		}

	}

};