#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        vector<vector<int>> dp(n+1, vector<int>(n+1, 1));
        for (int i = 1; i <= n;i++)
        {
            for (int j = 1; j <= n;j++)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }
        cout << dp[n][n] << endl;
    }
}