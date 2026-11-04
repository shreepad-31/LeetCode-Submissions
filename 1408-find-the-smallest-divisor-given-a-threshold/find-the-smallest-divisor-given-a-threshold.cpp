class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxElement = 0;
        for(int i = 0; i < nums.size(); i++) maxElement = max(nums[i], maxElement);

        int low = 1, high = maxElement, mid, ans;
        while(low <= high){
            mid = (low + high) / 2;
            int sum = 0;
            for(auto it : nums) sum += (it + mid - 1) / mid;
            if(sum > threshold) low = mid + 1;
            else{
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};