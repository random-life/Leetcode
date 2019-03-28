class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> sta;
        if(s.size()==0)return 0;
        int re = 0,last = 0;
        for (int i =0; i<s.size();i++)
        {
            if (sta.empty()) sta.push(i);
            else
            {
                if(s[i]==')'&&s[sta.top()]=='(')
                    sta.pop();
                else sta.push(i);
            }
        }
        
        if(sta.empty())
        {
            return s.size();
        }
        int temp = s.size();
        re = max(temp-sta.top()-1,re);
        int len = sta.size();
        for(int i=0;i<len-1;i++)
        {
            //cout<<sta.top()<<endl;
            temp = sta.top();
            sta.pop();
            re = max(temp-sta.top()-1,re);
        }
        //cout<<sta.top();
        return max(re,sta.top());
    }
};