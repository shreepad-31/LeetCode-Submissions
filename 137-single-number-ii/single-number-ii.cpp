class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int pointer = 0;
        while(pointer + 2 < nums.size()){
            if(nums[pointer] != nums[pointer + 2]) return nums[pointer];
            pointer += 3;
        }

        return nums.back();
    }
};