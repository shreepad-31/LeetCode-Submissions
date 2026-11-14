class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0, greed = 0, size = 0;
            sort(g.begin(), g.end()); sort(s.begin(), s.end());

            while(greed < g.size() && size < s.size()){
                if(g[greed] > s[size]) size++;
                else {count++; greed++; size++;}
            }
            return count;
        }
};