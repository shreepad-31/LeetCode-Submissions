class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = n * (n + 1) / 2, terms = (n / m);
        if(m > n) return num1;
        return num1 - terms * (2 * m + (terms - 1) * m);
    }
};