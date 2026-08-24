class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size(), low = 0, high = n - 1, mid;

        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == target) return mid;

            else if(nums[high] < nums[mid] && target <= nums[high]) low = mid + 1;

            else if(nums[high] < nums[mid] && target < nums[mid]) high = mid - 1;

            else if(nums[mid] < nums[low] && target >= nums[low]) high = mid - 1;

            else if(nums[mid] < nums[low] && target > nums[mid]) low = mid + 1;

            else if(nums[mid] > target) high = mid - 1;

            else if(nums[mid] < target) low = mid + 1;
        }

        return -1;
    }
};