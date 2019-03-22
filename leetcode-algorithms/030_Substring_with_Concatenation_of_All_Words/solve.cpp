class Solution {
public:
    
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string, int> wordl;
        vector<int>re;
        if(s.size()==0||words.size()==0)
            return re;
        
        for(int i=0;i<words.size();i++)
        {
            wordl[words[i]]++;
        }
        int len = words[0].size();
        int wl = words.size();
        int m = s.size();
        for (int i=0;i<=m-len*wl;i++)
        {
            
            map<string,int> seen;
            int j = 0;
            while(j<words.size())
            {
                string s_sub = s.substr(j*len+i,len);
               
                seen[s_sub]++;
                if (wordl.find(s_sub)!=wordl.end())
                {
                    if (seen[s_sub]>wordl[s_sub])
                        break;
                        
                }
                else break;
                j++;
            }
            //cout<<"i"<<i<<"j"<<j<<m-wl*len<<endl;
            
            if (j==words.size())
            {
                re.push_back(i);
                
            }
        }
        
        return re;
    }
};