class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int trow = 0, brow = matrix.size() - 1, lcol = 0, rcol = matrix[0].size() - 1;

        while(brow >= trow && rcol >= lcol){
            for(int i = lcol; i <= rcol; i++) ans.push_back(matrix[trow][i]);
            trow++; if(trow > brow) break;

            for(int i = trow; i <= brow; i++) ans.push_back(matrix[i][rcol]);
            rcol--; if(lcol > rcol) break;

            for(int i = rcol; i >= lcol; i--) ans.push_back(matrix[brow][i]);
            brow--; if(trow > brow) break;

            for(int i = brow; i >= trow; i--) ans.push_back(matrix[i][lcol]);
            lcol++; if(lcol > rcol) break;
        }

        return ans;
    }
};