#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>

using namespace std;

class Solution{
    vector<vector<int>> threeSum(vector<int>& nums)
    {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for (int i=0; i<nums.size();i++)
        {
            int target = -nums[i];
            int front = i+1 ;
            int back = nums.size()-1;
            while(front<back)
            {
                if(nums[front]+nums[back]==target)
                {
                    vector<int> triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[front]);
                    triplet.push_back(nums[back]);
                    res.push_back(triplet);
                    while(front<back&&nums[front]==triplet[1]) front++;
                    while(front<back&&nums[back]==triplet[2]) back--;
                }
                else if(nums[front]+nums[back]<target) front++;
                else if (nums[front]+nums[back]> target)back--;
            }
            while(i<nums.size()-1&&nums[i+1]==nums[i]) i++; 
        }
        return res;
    }
}