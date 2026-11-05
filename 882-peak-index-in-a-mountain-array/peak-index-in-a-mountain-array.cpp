class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1, mid;

        while(low <= high){
            mid = (low + high) / 2;
            if(arr[mid + 1] < arr[mid]){
                if(arr[mid - 1] < arr[mid]) return mid;
                else high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return mid;
    }
};