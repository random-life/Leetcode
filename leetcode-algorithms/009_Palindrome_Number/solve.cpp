class Solution {
public:
    bool isPalindrome(int x) {
       int m = x;
		if (x < 0)
		{
			return false;
		}
		long long sh = 0,mod =0,fi=0;
		while(1)
		{
			mod = x%10;
			if(fi*10+mod>INT_MAX) 
			{
				return false;
                break;
			}
			fi = fi*10 + mod;
			x = x/10;

			if(x==0)
			{
				break;
			}
			//cout<<x<<" "<<fi<<endl;
		}

		if (fi == m) return true;
		else return false;
    }
};