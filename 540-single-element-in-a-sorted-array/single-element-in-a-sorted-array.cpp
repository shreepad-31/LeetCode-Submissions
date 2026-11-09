class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size(), mid, ans;
        if(high == 1) return nums[0];

        while(low <= high){
            mid = (low + high) / 2;
            if(nums[mid] == nums[mid + 1]){
                if(mid % 2) high = mid - 1;
                else low = mid + 2;
            }
            else{
                if(mid % 2) low = mid + 1;
                else{
                    ans = mid;
                    high = mid - 1;
                }
            }
        }
        return nums[ans];
    }
};