class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int obs = 0, exp = 0;
        for(int i = 0; i < nums.size(); i++){
            obs ^= nums[i];
            exp ^= (i + 1);
        }
        return obs ^ exp;
    }
};