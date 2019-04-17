class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long int absn = abs((long) n);
        //printf("%ld",absn);
        while(absn>0)
        {
            if(absn&1>0)
            res*=x;
            absn>>=1;
            x*=x;
            //cout<<x<<absn<<res<<endl;
        }
        return n>0?res:1/res;
    }
};