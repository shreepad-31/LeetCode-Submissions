class Solution {
public:
    int maxDistinct(string s) {
        int mask = 0, count = 0;
        for(char it : s){
            if(((mask >> (it - 'a')) & 1) == 0){
                mask |= 1 << (it - 'a');
                count++;
                if(count == 26) break;
            }
        }
        return count;
    }
};