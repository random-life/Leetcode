#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Addjutdown(vector<int>&nums, int parent, int size)
{
    int child = 2*parent+1;
    while(child<size)
    {
        if(child+1<size&&nums[child]>nums[child+1])
        {
            child++;
        }
        if(nums[parent]>nums[child])
        {
            swap(nums[parent],nums[child]);
            parent = child;
            child = 2*parent+1;
        }
        else break;
    
    }
}
void heapset(vector<int>& heap,vector<int>& nums,int k)
{
    for(int i= 0; i<k; i++)
    {
        heap.push_back(nums[i]);
    }
    for(int i = (k-2)/2;i>=0;i--)
    {
        Addjutdown(heap,i,k);
    }
    for(int i = k;i<nums.size();i++)
    {
        if(nums[i]>heap[0])
        {
            heap[0]=nums[i];
            Addjutdown(heap,0,k);
        }
    }
}
int main()
{
    vector<int> nums;
    int m;
    
    while(cin>>m)
    {
        
        nums.push_back(m);
        if(getchar()=='\n')
        {
            break;
        }
        
    }
    int k = 5;
    vector<int> heap;
    heapset(heap,nums,k);
    

    for(int i=0;i<heap.size();i++)
    {
        cout<<heap[i]<<endl;

    }
    system("pause");
    return 0;

}