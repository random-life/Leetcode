class Solution {
public:
    int reverse(int x) {
        long int re = 0, mod;
        
        //cout<<INT_MAX;
        if (x>=pow(2,31)-1||x<-pow(2,31)) 
        {
            
            return 0;
           
        }
        while(1)
        {
            mod = x%10;
            x = x/10;
            re = re*10;
            re += mod;
            
            if(x==0)
            {
                break;
            }
           

            
        }
        if (re>INT_MAX-2||re<INT_MIN) return 0;
        return re;
    }
};