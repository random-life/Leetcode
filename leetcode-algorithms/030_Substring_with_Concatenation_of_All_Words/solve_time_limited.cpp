class Solution {
public:
    void swap(string &a,string &b)
    {
        string temp = a;
        a = b;
        b = temp;
    }
    void perm(int k,int l, vector<string>& m,vector<string>& lines)
    {
        if (k == l)
        {
            string s = "";
            for(int i=0;i<m.size();i++)
            {
                s+=m[i];
                
            }
            //cout<<s<<endl;
            lines.push_back(s);
        }
        else
        {
            for(int i=k;i<=l;i++)
            {
                swap(m[i],m[k]);
                perm(k+1,l,m,lines);
                swap(m[i],m[k]);
            }
        }
    }
    vector<string> getlines(vector<string>& words)
    {
        vector<string> lines;
        int k = 0,l = words.size()-1;
        perm(k,l,words,lines);
        return lines;
    }
    void unique_s(vector<string>&lines)
    {
        
        
        sort(lines.begin(),lines.end());
        
        lines.erase(unique(lines.begin(),lines.end()),lines.end());
       
        
    }
    vector<int> getnext(string& s)
    {
        
        vector<int> next(s.size(),-1);
        next[0] = -1;
        //cout<<0;
        int i = 0, l = s.size()-1,j = -1;
        
        while(i<l)
        {
        
            if(j == -1||s[i]==s[j])
            {
                j++;
                i++;
                next[i] = j;
            }
            else
            {
                j = next[j];
            }
            //cout<<i<<":"<<next[i]<<endl;
        }
        return next;
        
    }
    int com(string s, string l,vector<int>&next,vector<int>& r)
    {
        int i = 0, j = 0, re = -1;
        while(i<s.size())
        {
            
            if(j>-1&&s[i]==l[j])
            {
                i++;
                j++;
                if(j == l.size())
                {
                    re = i - l.size();
                    r.push_back(re);
                    j=0;
                    i = re+1;
                }
            }
            else
            {
                if (j ==-1)
                {
                    i++;
                    j=0;
                }
                else
                    j = next[j];
                
            }

        }
        return -1;
        
    }
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<string> lines;
        vector<int> re;
        lines = getlines(words);
        unique_s(lines);
        for(int i=0; i<lines.size();i++)
        {
            //cout<<lines[i]<<endl;
            vector<int> next = getnext(lines[i]);
            
            com(s,lines[i],next,re);
            
            //cout<<lines[i]<<":"<<r<<endl;
        }
        
        return re;
    }
};