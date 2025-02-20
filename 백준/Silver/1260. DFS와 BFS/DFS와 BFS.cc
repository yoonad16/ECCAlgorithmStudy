#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool visitedDFS[1001];
bool visitedBFS[1001];

void dfs(int node){
    visitedDFS[node] = true;
    cout << node << " ";

    for (int next : graph[node]){
        if (!visitedDFS[next]){
            dfs(next);
        }
    }
}

void bfs(int start){
    queue<int> q;
    q.push(start);
    visitedBFS[start] = true;

    while (!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int next : graph [node]){
            if (!visitedBFS[next]){
                visitedBFS[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M, V;
    cin >> N >> M >> V;

    for (int i = 0; i < M; i++){
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i=1; i<=N; i++){
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V);
    cout << '\n';

    bfs(V);
    cout << '\n';

    return 0;
}
