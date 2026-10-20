class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char x : columnTitle){
            ans *= 26;
            ans += x - 64;
        }
        return ans;
    }
};