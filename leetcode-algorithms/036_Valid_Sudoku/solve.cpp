class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int seen1[9][9]={0},seen2[9][9]={0},seen3[9][9]={0};
        for(int i=0; i<9;i++)
        {
            for(int j=0; j< board[i].size();j++)
            {
                if(board[i][j]!='.')
                {
                    int num = board[i][j]-'0'-1;
                    int k = i/3*3+j/3;
                    if(seen1[i][num]||seen2[j][num]||seen3[k][num])
                        return false;
                    seen1[i][num] = 1 ;
                    seen2[j][num] = 1 ;
                    seen3[k][num] = 1 ;
                }
            }
        }
        return true;
    }
};