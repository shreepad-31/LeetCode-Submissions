class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        int hasharr[51] = {0};

        for(int i = 0; i < n; i++) hasharr[nums[i]]++;

        if(k == 1){
            for(int i = 50; i >= 0; i--) if(hasharr[i] == 1) return i;
            return -1;
        }
        else if(k == n){
            for(int i = 50; i >= 0; i--) if(hasharr[i]) return i; return -1;
        }
        else{
            int first = max(nums[0], nums[n - 1]), last = min(nums[0], nums[n - 1]);
            if(hasharr[first] == 1) return first;
            else if(hasharr[last] == 1) return last;
            else return -1;
        }
    }
};