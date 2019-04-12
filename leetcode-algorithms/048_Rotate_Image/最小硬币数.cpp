#include <iostream>
using namespace std;

#define MaxNum  pow(2,31) - 1

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> c(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == 5 || i == 10 || i == 20 || i == 50 || i == 100)
            {
                c[i] = 1;
                continue;
            }
            int curMin = MaxNum;
            if (i - 1 > 0)
                curMin = c[i - 1] < curMin ? c[i - 1] : curMin;
            if (i - 5 > 0)
                curMin = c[i - 5] < curMin ? c[i - 5] : curMin;
            if (i - 10 > 0)
                curMin = c[i - 10] < curMin ? c[i - 10] : curMin;
            if (i - 20 > 0)
                curMin = c[i - 20] < curMin ? c[i - 20] : curMin;
            if (i - 50 > 0)
                curMin = c[i - 50] < curMin ? c[i - 50] : curMin;
            if (i - 100 > 0)
                curMin = c[i - 100] < curMin ? c[i - 100] : curMin;
            c[i] = curMin + 1;
        }
        cout << c[n] << endl;
    }
    

    system("pause");
    return 0;
}