class Solution {
public:
    bool isValid(string s) {
        stack<char> re;
        for(int i = 0; i<s.size();i++)
        {
            if (s.size()==0)
                return true;
            if (re.empty()&&(s[i]==')'||s[i]=='}'||s[i]==']'))
                return false;
            else if(s[i]=='('||s[i]=='{'||s[i]=='[')
                re.push(s[i]);
            else if (!re.empty()&&s[i]==')')
            {
                if (re.top()!='(') return false;
                else re.pop();
            }
            else if (!re.empty()&&s[i]=='}')
            {
                if(re.top()!='{') return false;
                else re.pop();
            }
              
            else if (!re.empty()&&s[i]==']')
            {
                if(re.top()=='[') re.pop();
                else return false;
            }
                
        }
        return re.empty();
    }
};