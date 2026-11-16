class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        int pointer = 0;
        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > intervals[pointer][1]){
                pointer++;
            }
            else{
                intervals[pointer][1] = max(intervals[i][1], intervals[pointer][1]);
                intervals.erase(intervals.begin() + i);
                i--;
            }
        }

        return intervals;
    }
};