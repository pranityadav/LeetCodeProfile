class Solution {
public:
  bool dfs(vector<vector<char>>& board, string& word, int r, int c, int idx) {
        if (r < 0 || r >= board.size() || c < 0 || c >= board[r].size() || board[r][c] != word[idx])
            return false;
      
        if (idx == word.size()-1)
            return true;
        
        char tmp = board[r][c];
        board[r][c] = ' ';
        
        bool result =  dfs(board, word, r+1, c, idx+1) 
            || dfs(board, word, r-1, c, idx+1)
            || dfs(board, word, r, c+1, idx+1) 
            || dfs(board, word, r, c-1, idx+1);
        
        board[r][c] = tmp;
        return result;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        for (int r = 0; r < board.size(); ++r) {
            for (int c = 0; c < board[r].size(); ++c) {
                if(board[r][c] == word[0]){
                    if(dfs(board, word, r, c, 0))
                        return true;
            }
        }
        }
        return false;
    }
};
