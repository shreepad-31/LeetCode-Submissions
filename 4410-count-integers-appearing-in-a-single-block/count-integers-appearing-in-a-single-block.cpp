class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> mpp; int count = 0;
        
        for(int i = 0; i < nums.size(); i++) if(i == 0 || nums[i] != nums[i - 1]) mpp[nums[i]]++;

        for(auto [num, freq] : mpp) if(freq == 1) count++;

        return count;
    }
};