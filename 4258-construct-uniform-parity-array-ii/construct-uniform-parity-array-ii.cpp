class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int LowestOdd = INT_MAX, LowestEven = INT_MAX;
        for(int i = 0; i < nums1.size(); i++){

            if((nums1[i] % 2)) LowestOdd = min(LowestOdd, nums1[i]);
            else LowestEven = min(LowestEven, nums1[i]);
        }

        if(LowestEven == INT_MAX || LowestOdd == INT_MAX) return true;

        return LowestEven > LowestOdd;
    }
};