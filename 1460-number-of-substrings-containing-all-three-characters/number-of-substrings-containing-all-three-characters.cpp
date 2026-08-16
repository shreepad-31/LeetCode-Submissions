class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int last_occur[3] = {-1, -1, -1};

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c') last_occur[s[i] - 'a'] = i;
            if(last_occur[0] > -1 && last_occur[1] > -1 && last_occur[2] > -1){
                count += min(last_occur[0], min(last_occur[1], last_occur[2])) + 1;
            }
        }
        return count;
    }
};