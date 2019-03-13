class Solution {
public:
    int lengthOfLongestSubstring(string s) {
            vector<int > dict(256,-1);
    int start=-1,maxl=0;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]]>start){
            start=dict[s[i]];
        }
        dict[s[i]]=i;
        maxl=max(maxl,i-start);
    }
    return maxl;
    }
};