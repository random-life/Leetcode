class Solution {
public:
    string countAndSay(int n) {
        string re = "1";
        
        while(--n)
        {
            string cur = "" ;
            for(int i = 0; i<re.size();i++)
            {
                int count = 1;
                while(i<re.size()-1&&re[i]==re[i+1])
                {
                    count++;
                    i++;
                }
                cur+=to_string(count)+re[i];
            }
            //cout<<cur<<endl;
            re = cur;
        }
        return re;
    }
};