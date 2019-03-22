class Solution {
public:

vector<string> generateParenthesis(int n)
{
    vector<string> result;
    string str = "";
    addpar(result, str, n, 0);
    return result;        
}
void addpar(vector<string>& result, string str, int n, int m)
{
    if(n==0&&m==0)
    {
        result.push_back(str);
        return;
    }
    if(m>0)
    {
        addpar(result, str+")", n, m-1);
    }
    if(n>0)
    {
        addpar(result,str+"(",n-1,m+1);
    }
}
};