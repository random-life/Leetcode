class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN&&divisor==-1)
        {
            return INT_MAX;
        }
        bool sign = (dividend>0)^(divisor>0)? true:false;
        long long dnd = labs(dividend), div = labs(divisor);
        long int res = 0 ;
        while(dnd >= div)
        {
            long int temp = div;
            long int m = 1;
            while(temp<<1<=dnd)
            {
                temp = temp<<1;
                m = m<<1;
            }
            dnd-=temp;
            res+=m;
        }
        if (sign)
            return res*-1;
        else return res;
        
    }
};