class Solution {
public:
    int myAtoi(string str) {
       int len = str.size();
		long long re =0;
		bool mi = false;
		bool first = true;
		bool ch = true;

		for(int i = 0;i<len;i++)
		{
			
			int temp = str[i]-48;
			if (str[i]=='-'&&first)
			{
				mi = true;
				first = false;
				ch = false;
				continue;
			}
			if (str[i]=='+'&&first)
			{
				ch =false;
				first = false;
				continue;
			}
			if((temp<0||temp>9))
			{
				if(str[i]==' '&&ch) continue;
				else
				break;
			}
			ch = false;
            first = false;


			if (mi)
			{
				if (-(re*10+temp)<INT_MIN)
				{
					return INT_MIN;
				}
			}
			else
			{
				if (re*10+temp > INT_MAX)
				{
					return INT_MAX;
				}
				
			}
			re =re*10+temp;

		}
			if (mi)
				re = - re;
			

			return	re;

		
    }
};