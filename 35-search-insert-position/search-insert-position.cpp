class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, n = nums.size(), high = n - 1, mid, ans = 0;
        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target) return mid;

            else if(nums[mid] > target) high = mid - 1;
            
            else {low = mid + 1; ans = low;}
        }
        return ans;
    }
};