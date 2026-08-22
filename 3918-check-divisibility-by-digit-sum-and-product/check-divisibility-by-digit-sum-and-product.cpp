class Solution {
public:
    bool checkDivisibility(int n) {
        int dsum = 0, dprod = 1, temp = n;
        while(temp != 0){
            int digit = temp % 10;
            dsum += digit;
            dprod *= digit;
            temp /= 10;
        }
        return !(n % (dsum + dprod));
    }
};