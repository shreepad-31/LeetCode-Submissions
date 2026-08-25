class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int hasharr[100] = {0};
        for(int i = 0; i < nums.size(); i++) if(nums[i] % k == 0) hasharr[nums[i] / k - 1] = 1;
        for(int i = 0; i < 100; i++) if(hasharr[i] == 0) return (i + 1) * k;
        return 101 * k;
    }
};