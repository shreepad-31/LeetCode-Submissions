class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans; int n = nums.size();
        for(int i = 0; i < pow(2, nums.size()); i++){
            vector<int> subset; int temp = i, ind = 0;

            while(temp){
                if(temp & 1) subset.push_back(nums[ind]);
                temp = temp >> 1; ind++;
            }

            ans.push_back(subset);
        }
        return ans;
    }
};