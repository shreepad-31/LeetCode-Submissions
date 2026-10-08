class Solution {
public:
    int mySqrt(int x) {
        int low = 0, high = x, mid, ans;
        while(low <= high){
            long long mid = low + (high - low) / 2;
            long long sq = mid * mid;
            
            if(sq <= x){
                low = mid + 1;
                ans = mid;
            }
            else{
                high = mid - 1;
            }
        }
        return ans;
    }
};