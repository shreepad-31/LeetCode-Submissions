class Solution {
public:
    void search(int node, vector<int>& visited, vector<vector<int>>& isConnected){
        visited[node] = 1;
        for(int j = 0; j < isConnected.size(); j++){
            if(j == node) continue;
            else if(isConnected[node][j] && !visited[j]) search(j, visited, isConnected);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> visited(isConnected.size(), 0);
        int count = 0;

        for(int i = 0; i < visited.size(); i++){
            if(!visited[i]) {count++; search(i, visited, isConnected);}
        }

        return count;
    }
};