class Solution {
public:
    void search(int node, vector<int>& visited, vector<vector<int>>& adj){
        visited[node] = 1;
        for(auto it : adj[node]){
            if(!visited[it]) search(it, visited, adj);
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> visited(isConnected.size(), 0);
        int count = 0, V = isConnected.size();

        vector<vector<int>> adj(V);
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(isConnected[i][j] && i != j){
                    adj[i].push_back(j);
                }
            }
        }

        for(int i = 0; i < visited.size(); i++){
            if(!visited[i]) {count++; search(i, visited, adj);}
        }
        return count;
    }
};