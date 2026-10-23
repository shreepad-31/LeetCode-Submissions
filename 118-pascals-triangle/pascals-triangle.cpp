class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
    
        for(int i = 0; i < numRows; i++){
            vector<int> level(i + 1, 1);
            if(i < 2) pascal.push_back(level);
            else{
                for(int j = 0; j < i / 2; j++){
                    level[j + 1] = pascal[i - 1][j] + pascal[i - 1][j + 1];
                    level[i - j - 1] = level[j + 1];
                }
                pascal.push_back(level);
            }
        }
        return pascal;
    }
};