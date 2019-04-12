#include<iostream>  
using namespace std;

int findMin(int n)
{
    int *result = new int(n + 1);
    result[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int minNum = i;
        for (int j = 1;; j++)
        {
            if (i >= j * j)
            {
                int tmp = result[i - j*j] + 1;
                minNum = tmp < minNum ? tmp : minNum;
            }
            else
                break;
        }
        result[i] = minNum;
    }
    return result[n];
}

int main()
{
    int n;
    while (cin >> n)
        cout << findMin(n) << endl;

}