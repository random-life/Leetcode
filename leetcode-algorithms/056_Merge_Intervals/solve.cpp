#include<iostream>
#include<stdio.h>
#include<vector>
#include<stack>
#include<algorithm>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double n = 1.3456789;
    printf("%.3lf\n",n);
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<n<<endl;
    char ch ;
    string b;
    cin>>b;
    cout<<b<<endl;
    getline(cin,b);
    cout<<b<<endl;
    
    
    system("pause");
    return 0;

}
