class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), low = 0, high = n - 1, mid, ans = 5000;
        
        while(low <= high){
            mid = (low + high) / 2;

            if(nums[mid] < ans) ans = nums[mid];

            if(nums[high] < nums[mid]) low = mid + 1;
            else high = mid - 1;
        }
        return ans;
    }
};