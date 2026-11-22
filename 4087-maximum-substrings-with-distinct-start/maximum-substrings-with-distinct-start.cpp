class Solution {
public:
    int maxDistinct(string s) {
        int arr[26] = {0};
        int count = 0;
        for(auto it : s){
            if(arr[it - 'a'] == 0) {count++; arr[it - 'a'] = 1;}
        }
        return count;
    }
};