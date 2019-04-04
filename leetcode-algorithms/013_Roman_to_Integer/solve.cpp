class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> T ={  { 'I' , 1 },
                                   { 'V' , 5 },
                                   { 'X' , 10 },
                                   { 'L' , 50 },
                                   { 'C' , 100 },
                                   { 'D' , 500 },
                                   { 'M' , 1000 } };
    
    int sum = T[s.back()];
    
    int i = s.length()-1;
    for(i;i > 0; i--)
    {
        if(T[s[i]] > T[s[i-1]])
            sum -= T[s[i-1]];
        else if (T[s[i]] <= T[s[i-1]])
            sum += T[s[i-1]];
        
    }
    return sum;
    }
};