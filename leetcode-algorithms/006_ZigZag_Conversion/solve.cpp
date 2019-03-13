class Solution {
public:

string convert(string s, int nRows) {
    if (nRows==1)
        return s;
 
    int len =(int)s.length();
    string *str = new string[nRows];
    int row=0,step;
    for(int i=0; i<len;i++)
    {   
        str[row].push_back(s[i]);
        if(row==0) step=1;
        else if(row==nRows-1)step=-1;
        row+=step;
    }
    s.clear();
    for(int i =0;i<nRows;i++)
    {
        s.append(str[i]);
    }
    delete [] str;

    return s;
}
};