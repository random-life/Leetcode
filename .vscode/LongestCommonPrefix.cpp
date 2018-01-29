#include <iostream>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {
    int size=strs.size();
    string p= "";
    for(int idx=0;strs.size()>0;p+=strs[0][idx],idx++){
        for(int i=0;i<size;i++)
        {
            if((idx>=strs[i].length())||(i>0&&strs[i][idx]!=strs[i-1][idx]))
            return p;
           
        }
    }
    return p;

}

int main(){
    vector<string> strs(3);
    int n;
    cin>>n;
    for(int i=0; i<n;i++)
    {
        cin>>strs[i];
    }
    string p=  longestCommonPrefix(strs);
 
    cout<<p;
    
    system("pause");
    return 0;


}