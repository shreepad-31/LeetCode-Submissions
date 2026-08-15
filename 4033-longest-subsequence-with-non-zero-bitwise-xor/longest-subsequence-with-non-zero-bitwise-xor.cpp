class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       bool hasnonzeroele=false;
        int xr=0;
        for(int i=0;i<nums.size();i++){
            xr^=nums[i];
            if(nums[i]!=0) hasnonzeroele=true;
        }
        if(xr!=0)return nums.size();
        if(hasnonzeroele) return nums.size()-1;
        return 0;
    }
};