class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n = nums.size(), sum = 0;

        for(int i = 1; i * i <= n; i++){
            if(n % i == 0){
                if(i * i == n) sum += nums[i - 1] * nums[i - 1];
                else sum += nums[i - 1] * nums[i - 1] + nums[n / i - 1] * nums[n / i - 1];
            }
        }
        return sum;
    }
};