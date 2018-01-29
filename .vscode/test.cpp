#include<iostream>

using namespace std;
bool isM(string s,string p,int i,int j){
    if(j>=p.size())return i>=s.size();
    if(j==p.size()-1){
        return (i==s.size()-1&&(s[i]==p[j]||p[i]=='.'));
    }
    if(j<p.size()-1&&p[j+1]!='*')
    {
        if(i==s.size())return false;
        if(i<s.size()&&(s[i]==p[j]||p[j]=='.')&&p[j]!='*')
        return isM(s,p,i+1,j+1);
        else return false;

    }
    while(i<s.size()&&j<p.size()&&(s[i]==p[j]||p[j]=='.')){
        if(isM(s,p,i,j+2)){
            return true;
        }
        i++;
    }
    return isM(s,p,i,j+2);

}
bool isMatch(string s, string p) {
    return isM(s,p,0,0);
    }
int main(){
    string s,p;
    cin>>s;
    cin>>p;
    isMatch(s,p);
    //cout<< myAtoi(s);
    system("pause");
    return 0;
}