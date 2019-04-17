#include<iostream>
#include<string>
#include<vector>
#include<stdio.h>

using namespace std;

int main()
{
    string s ;
    vector<string> res;
    
    string tmp="";
    cin>>s;
    res.push_back(s);

    
    while(getchar()!='\n')
    {
        cin>>s;
        res.push_back(s);
    }
    for(int i =res.size()-1;i>=0;i--)
    {
        cout<<res[i]<<" ";
    }
    system("pause");
    return 0;
}