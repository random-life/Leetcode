#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<cstring>
using namespace std;

int main()
{
    
    int N, K;
    cin>>N>>K;
    vector<long long int> nums;
    for(int i=0;i<N;i++)
    {
        long long int num;
        cin>>num;
        nums.push_back(num);
    }
    sort(nums.begin(),nums.end());
    int temp = 0;
    for(int i=0;i<K;i++)
    {
        int a = nums[0]-temp;
        cout<<a<<endl;
        nums.erase(nums.begin());
        if(nums.size()==0) break;
        temp+=nums[0];
        
    }


    system("pause");
    return 0;
}