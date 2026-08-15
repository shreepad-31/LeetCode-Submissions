class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> freq;
        int n = nums.size(), right = 0;

        while(right < n){
            freq[nums[right]]++;
            if(freq[nums[right]] > 2){ 
                nums.erase(nums.begin() + right);
                right--; n--;}
            right++;
        }
        return n;
    }
};