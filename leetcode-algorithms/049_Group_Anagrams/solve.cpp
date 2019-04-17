class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> m;
        for(auto str:strs)
        {
            string t = str;
            sort(t.begin(),t.end());
            m[t].push_back(str);
        }
        for(auto itor:m)
        {
            res.push_back(itor.second);
        }
       
                
            
        
        return res;
    }
};