class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 2; i++){
            int front = i + 1, end = nums.size() - 1;
            while(front < end){
                int sum = nums[i] + nums[front] + nums[end];
                if(sum == 0){
                    st.insert({nums[i], nums[front], nums[end]});
                    front++;
                    end--;
                }
                else if(sum > 0) end--;
                else front++;
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};