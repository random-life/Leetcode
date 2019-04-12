/*
*侯凯,2014-9-15
*功能：100楼层抛珠问题
*/
#include<iostream>
using namespace std;

int max(int a, int b)
{
    return (a > b)? a : b;
}

int dp[101];
//N<=100;
int floorThr(int N)
{
    for (int i = 2; i <= N; i++)
    {
        dp[i] = i;
        for (int j = 1; j<i; j++)
        {
            int tmp = max(j, 1 + dp[i - j]);    //j的遍历相当于把每层都试一遍
            if (tmp<dp[i])
                dp[i] = tmp;
        }
    }
    return dp[N];
}

int main()
{
    dp[0] = 0;
    dp[1] = 1;
    int dis = floorThr(100);
    cout << dis << endl;
    system("Pause");
}