class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  a = 0;
        while(a * a <= c){
            long long  b = c - a * a;
            int rootb = sqrt(b);

            if(rootb * rootb == b) return true;
            a++;
        }
        return false;
    }
};