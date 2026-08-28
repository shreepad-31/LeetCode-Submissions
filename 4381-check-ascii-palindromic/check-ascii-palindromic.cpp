class Solution {
public:
    bool isPalindromic(string s) {
        int n = s.size();
        for(int i = 0; i <= n / 2; i++){
            int x = s[i], y = s[n - 1 - i];

            for(int j = 0; j < 8; j++){
                int bitx = (x >> (7 - j)) & 1;
                int bity = (y >> j) & 1;

                if(bity != bitx) return false;
            }
        }
        return true;
    }
};