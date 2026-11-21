class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int countLess = 0, countPivot = 0;
        for(int it : nums){
            if(it == pivot) countPivot++;
            else if(it < pivot) countLess++;
        }

        vector<int> ans(nums.size(), 0);
        int pointerLess = 0, pointerPivot = countLess, pointerMore = countPivot + countLess;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot) ans[pointerLess++] = nums[i];
            else if(nums[i] == pivot) ans[pointerPivot++] = pivot;
            else ans[pointerMore++] = nums[i];
        }

        return ans;
    }
};