class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size(), Largest = nums[0], smaller = nums[n - 1];

        vector<int> smallest(n, 0);
        for(int i = n - 1; i > -1; i--){
            smaller = min(smaller, nums[i]);
            smallest[i] = smaller;
        }

        for(int i = 0; i < n; i++){
            Largest = max(Largest, nums[i]);
            if(Largest - smallest[i] <= k) return i;
        }
        return -1;
    }
};