class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i = 0; i < n - 2; i++){
            int front = i + 1, end = n - 1;
            while(front < end){
                if(nums[i] + nums[front] + nums[end] == 0){
                    ans.push_back({nums[i], nums[front], nums[end]});
                    while((front + 1 < end) && nums[front] == nums[front + 1]) front++;
                    front++;
                    while((end > front) && nums[end] == nums[end - 1]) end--;
                    end--;
                }
                else if(nums[i] + nums[front] + nums[end] < 0) front++;
                else end--;
            }
            while((i < n - 1) && nums[i] == nums[i + 1]) i++;
        }
        return ans;
    }
};