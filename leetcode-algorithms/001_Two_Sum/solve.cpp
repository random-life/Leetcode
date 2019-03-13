#include <stdio.h>
#include<iostream>
#include<vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        map <int, int> lookup;
        for (int i=0; i<nums.size(); i++)
        {
            lookup.insert(pair<int, int>(nums[i],i));
            int value = target - nums[i];
            if (lookup.count(value) && lookup[value]!=i)
            {
                
                res.push_back(lookup[value]);
                res.push_back(i);
                return res;
            }
        }
        return res;
            
    }
};

int main()
{
    Solution s;
    vector<int> a {2,3,4,5};
    vector<int> res;
    res = s.twoSum(a,6);
    for(int i=0;i<2;i++)
    cout<<res[i];
    system("pause");
}