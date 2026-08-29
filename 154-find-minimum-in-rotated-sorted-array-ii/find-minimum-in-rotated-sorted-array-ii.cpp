class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size(), high = n - 1, low = 0, mid, ans = INT_MAX;

        while(low <= high){
            mid = (low + high) / 2;

            if(nums[mid] < ans) ans = nums[mid];

            if((nums[mid] == nums[high]) && (nums[mid] == nums[low])){high--; low++;}

            else if(nums[high] < nums[mid]) low = mid + 1;

            else high = mid - 1;
        }
        return ans;
    }
};