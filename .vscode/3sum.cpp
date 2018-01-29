#include<iostream>
#include<vector>
#include<algorithm>  
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    int size = nums.size();
    for (int i = 0; i < size; i++ )
    {
        int target = - nums[i];
        int front = i + 1;
        int back = size - 1;
        while(front < back)
        {
            int sum = nums[front] + nums[back];
            if(sum == target)
            {
                vector<int> triplet(3,0);
                triplet[0] = nums[i];
                triplet[1] = nums[front];
                triplet[2] = nums[back];
                res.push_back(triplet);
                while (front < back && nums[front] == triplet[1]) front++;

                while (front < back && nums[back] == triplet[2]) back--;
            }
            else if(sum > target)
            {
                back--;
            }
            else if(sum < target)
            {
                front++;
            }
        }
        while (i + 1 < nums.size() && nums[i + 1] == nums[i]) 
        i++;
    }
    return res;

}
int  main()
{
    vector<int> nums (6);
    
    for(int i = 0; i < 6; i++)
    {
        cin>>nums[i];
    } 
    vector<vector<int>>res(threeSum(nums));

    int size = res.size();
    for(int i = 0; i < size; i++)
    {
        cout<<res[i][0]<<res[i][1]<<res[i][2]<<endl;
        //cout<<res[i][0];
    }
    cout<<"ok";

    system("pause");
    return 0;
}