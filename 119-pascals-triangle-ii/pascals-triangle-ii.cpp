class Solution {
public:
    int nCr(int n, int r){
        int x = max(n - r, r), y = min(n - r, r);

        int i = n, j = 1;
        long long result = 1;
        while(i > x || j <= y){
            result *= i;
            if(j <= y) result /= j;
            i--; j++;
        }

        return result;
    }

    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex + 1, 1);
        
        for(int i = 1; i <= rowIndex / 2; i++){
            ans[i] = nCr(rowIndex, rowIndex - i);
            ans[rowIndex - i] = ans[i];
        }
        return ans;
    }
};