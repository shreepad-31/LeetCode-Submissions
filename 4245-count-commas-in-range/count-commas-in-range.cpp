class Solution {
public:
    int countCommas(int n) {
        int answer = 0;
        int threshold = 1000;

        while (threshold <= n) {
            answer += n - threshold + 1;

            threshold *= 1000;
        }

        return answer;
    }
    
};