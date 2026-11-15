class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_seen;
        int maxLength = 0, left = 0;
        for(int right = 0; right < s.size(); right++){
            if(last_seen.count(s[right]) && last_seen[s[right]] >= left){
                left = last_seen[s[right]] + 1;
                last_seen[s[right]] = right;
            }
            else last_seen[s[right]] = right;
            maxLength = max(maxLength, right - left + 1);
        }   
        return maxLength;    
    }
};