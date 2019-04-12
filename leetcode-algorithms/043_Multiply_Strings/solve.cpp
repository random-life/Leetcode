class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")
            return to_string(0);
        
        string res(num1.size()+num2.size(),'0');
        int flag_all = 0;
        for(int j=num2.size()-1;j>=0;j--)
        {
            string temp;
            int fi_num2 = num2[j]-'0';
            int flag = 0;
            for (int i=num1.size()-1;i>=0;i--)
            {
                
                int fi_num1 = num1[i]-'0';
                int mul = fi_num1*fi_num2+flag;
                flag = mul/10;
                temp= to_string(mul%10)+temp;
            }
            if(flag>0)
            {
                temp= to_string(flag)+temp;
            }
            //cout<<"temp: "<<temp<<endl;
            int flag_m=0;
            for (int m=temp.size()-1;m>=0;m--)
            {
                
                int tm = res.size()-1-flag_all-(temp.size()-m-1);
                int fi_res = res[tm]-'0';
                int fi_temp = temp[m]-'0';
                res[tm] = to_string((fi_temp+fi_res+flag_m)%10)[0];
                flag_m = (fi_temp+fi_res+flag_m)/10; 
            }
            if(flag_m>0)
            {
                res[res.size()-temp.size()-flag_all-1]= to_string(flag_m)[0];
            }
            flag_all+=1;
            //cout<<"res: "<<res<<"flag_all: "<<flag_all<<"flag_m: "<<flag_m<<endl;
        }
        
            
        size_t startpos = res.find_first_not_of("0");
        
         if (string::npos != startpos) {
             return res.substr(startpos);
            }
        return res;
        
    }
};