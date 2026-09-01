class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(), pointer = n - 1;
        while(pointer >= 0){
            if(digits[pointer] == 9){
                digits[pointer] = 0;
                pointer--;
            }
            else {digits[pointer]++; return digits;}
        }
        digits[0] = 1; digits.push_back(0);
        return digits;
    }
};