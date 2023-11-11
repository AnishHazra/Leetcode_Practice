class Graph {
public:
    vector<vector<int>> adjMatrix;
    int N;

    Graph(int n, vector<vector<int>>& edges) {
        N = n;
        adjMatrix = vector<vector<int>>(n, vector<int>(n,1e9));

        for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];
            int cost = edge[2];

            adjMatrix[u][v]=cost;
        }    

        for(int i=0;i<n;i++){
            adjMatrix[i][i] = 0;
        }

        //Floyd Warshal
        for(int k = 0; k<n; k++) {
            
            for(int i = 0; i<N; i++) {
                for(int j = 0; j<N; j++) {
                    
                    adjMatrix[i][j] = min(adjMatrix[i][j], adjMatrix[i][k] + adjMatrix[k][j]);
                        
                }
            }
            
        }

    }
    
    void addEdge(vector<int> edge) {
        int u = edge[0];
        int v = edge[1];
        int cost = edge[2];

        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                adjMatrix[i][j] = min(adjMatrix[i][j],adjMatrix[i][u]+cost+adjMatrix[v][j]);
            }
        }
    }
    
    int shortestPath(int node1, int node2) {
        return adjMatrix[node1][node2]  == 1e9 ? -1 : adjMatrix[node1][node2];
    }
};

/**
 * Your Graph object will be instantiated and called as such:
 * Graph* obj = new Graph(n, edges);
 * obj->addEdge(edge);
 * int param_2 = obj->shortestPath(node1,node2);
 */