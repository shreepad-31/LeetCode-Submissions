class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; int n = nums.size();
        ans.reserve(1 << n);
        
        for(int mask = 0; mask < (1 << n); mask++){
            vector<int> subset; int temp = mask, ind = 0;

            while(temp){
                if(temp & 1) subset.push_back(nums[ind]);
                temp = temp >> 1; ind++;
            }

            ans.push_back(subset);
        }
        return ans;
    }
};