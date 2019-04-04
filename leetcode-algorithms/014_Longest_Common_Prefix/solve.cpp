class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        int le = strs.size();
        int idx = 0;
            for(idx;le>0;result+=strs[0][idx],idx++)
            {
                for(int j=0;j<le;j++)
                {
                    if(idx>=strs[j].size()||(j>0&&strs[j][idx]!=strs[j-1][idx]))
                        return result;
                }
            }
        return result;
    }
};