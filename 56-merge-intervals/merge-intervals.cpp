class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans = {intervals[0]};

        int pointer = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > ans[pointer][1]){
                ans.push_back(intervals[i]);
                pointer++;
            }
            else{
                ans[pointer][1] = max(intervals[i][1], ans[pointer][1]);
            }
        }

        return ans;
    }
};