class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int low = 0, high = 0, n = nums.size();
        
        for(int i = 1; i < n; i++){
            if(nums[i] < nums[low]) low = i;
            if(nums[i] > nums[high]) high = i;
        }

        if(low <= high) return min(high + 1, min(n - low, low + 1 + n - high));
        else return min(low + 1, min(n - high, high + 1 + n - low));
    }
};