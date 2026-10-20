class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        vector<pair<int, int>> zeros;

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(matrix[i][j] == 0) zeros.push_back({i, j});
            }
        }

        for(auto it : zeros){
            for(int k = 0; k < row; k++) matrix[k][it.second] = 0;
            for(int k = 0; k < col; k++) matrix[it.first][k] = 0;
        }
    }
};