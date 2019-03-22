class Solution {
public:
    void getNext(vector<int>&next,string needle)
    {
        int i = 0,j=-1;
        while(i < needle.size())
        {
            if(j==-1||needle[j]==needle[i])
            {
                ++j;
                ++i;
                if(i>=needle.size()) break;
                next[i]=j;
                
            }
            else
            {
                j = next[j];
            }
        }
    }
    int strStr(string haystack, string needle) {
        vector<int> next(needle.size(),-1);
        if (needle.size()==0)
        {
            return 0;
        }
           
        getNext(next,needle);
        //for(int m=0;m<next.size();m++)
            //cout<<next[m]<<" ";
        int j = 0;
        int re = -1,i=0;
        while(i<haystack.size())
        {
            if(j<needle.size()&&needle[j]==haystack[i])
            {
               
                if (j==needle.size()-1)
                {
                    re = i-needle.size()+1;
                    return re;
                    break;
                }
                 j++;
                 i++;
                 
                if (i>=haystack.size())
                {
                    return -1;
                    break;
                }
            }
            else j = next[j];
            if (j==-1)
            {
                i+=1;
                j=0;
            }
            //cout<<i<<j<<endl;
        }
        
        return re;
    }
};