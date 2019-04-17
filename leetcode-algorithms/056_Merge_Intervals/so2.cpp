#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
    int n,temp;
    vector<int> num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        num.push_back(temp);
    }
    
}
void tar(int& res,vector<int>&num, int a)
{
    for(int i=a, i<num.size();i++)
    if(num[i]==0)
    {
        if()
        tar(res，num, i+1);
    }
}