class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size(), low = 0, high = n - 1, mid;
        while(low <= high){
            mid = (low + high) / 2;

            if(nums[mid] == target) return true;

            if((nums[mid] == nums[high]) && nums[high] == nums[low]) {high--; low++;}

            else if(nums[mid] <= nums[high]){
                if(target <= nums[high] && target > nums[mid]) low = mid + 1;
                else high = mid - 1; 
            }

            else{
                if(target <= nums[mid] && target >= nums[low]) high = mid - 1;
                else low = mid + 1;
            }
        }
        return false;
    }
};