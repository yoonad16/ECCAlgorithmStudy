#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(int start, vector<vector<int>>& graph, vector<int>& color, bool& isBipartite) {
    queue<int> q;
    q.push(start);
    color[start] = 1;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (color[next] == 0) {  
                color[next] = -color[cur]; 
                q.push(next);
            } 
            else if (color[next] == color[cur]) {  
                isBipartite = false;
                return;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K;  
    cin >> K;

    while (K--) {
        int V, E;
        cin >> V >> E;

        vector<vector<int>> graph(V + 1);
        vector<int> color(V + 1, 0);
        bool isBipartite = true;

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        for (int i = 1; i <= V; i++) {
            if (color[i] == 0) { 
                bfs(i, graph, color, isBipartite);
            }
        }

        cout << (isBipartite ? "YES" : "NO") << '\n';
    }

    return 0;
}
