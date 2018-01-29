#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        for(int first = 0; first < size-2; first++)
        {
            second = first + 1;
            third = size - 1;
            sum = nums[first] + nums[second] + nums[third];
            if (sum == target) return sum;
            while(second < third)
            {
                int closet = nums[first] + nums[second] + nums[third];
                if (abs(closet-target) < abs(sums-target))
                {
                    sum = closet;
                }
                if (closet < target) second ++ ;
                else third --;
            }

        }
        return sum;
    }
};

int main()
{
    <vector>int nums;
    solution = new Solution ;
    print (solution.threeSumClosest())
}