class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        int lrange = 1, rrange = nums[0];
        int count = 1;

        while(rrange < nums.size() - 1){
            int maxJump = 0;
            for(int i = lrange; i <= rrange; i++) maxJump = max(maxJump, i + nums[i]);

            lrange = rrange + 1;
            rrange = maxJump;
            count++;
        }

        return count;
    }
};