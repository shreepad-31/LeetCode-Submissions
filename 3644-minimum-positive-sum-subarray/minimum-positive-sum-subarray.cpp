class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minsum = INT_MAX, n = nums.size();

        for(int i = l; i <= r; i++){
            int sum = 0, left = 0, right = i;
            for(int j = 0; j < i; j++) sum += nums[j];
            if(sum > 0) minsum = min(sum, minsum);

            while(right < n){
                sum = sum - nums[left] + nums[right];
                right++; left++;
                if(sum > 0) minsum = min(sum, minsum);
            }
        }

        if(minsum == INT_MAX) return -1;
        return minsum;
    }
};