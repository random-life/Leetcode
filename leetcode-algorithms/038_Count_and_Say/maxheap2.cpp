#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> nums = {9,6,2,4,1,5,7,8,3,0};
    make_heap(nums.begin(),nums.end(),less<int>());
    make_heap(nums.begin(),nums.end(),greater<int>());
    
    nums.push_back(11);
    push_heap(nums.begin(),nums.end(),greater<int>());
    pop_heap(nums.begin(),nums.end(),greater<int>());
    nums.pop_back();
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    system("pause");
    return 0;
}