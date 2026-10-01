class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int start = 0, end = 0, sum = 0, ans = INT_MAX;
        bool flag=false;
       for(int end =0;end<nums.size();end++)
       {
            sum+=nums[end];
            while(sum>=target&&end>=start)
            {   flag=true;
                ans=min(ans,end-start+1);
                sum-=nums[start];
                start++;
                if(sum>=target){
                    ans=min(ans,end-start+1);
                    flag=true;
                }; 
            }

       }
        if(flag) return ans;
        return 0;
    }
};