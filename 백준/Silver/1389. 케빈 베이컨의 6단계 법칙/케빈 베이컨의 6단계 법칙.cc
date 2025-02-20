#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int N, M;
vector<int> graph[101];

int bfs(int start) {
    vector<int> dist(N + 1, INF);
    queue<int> q;

    dist[start] = 0;
    q.push(start);
    int sum = 0;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (dist[next] == INF) {
                dist[next] = dist[cur] + 1;
                sum += dist[next];
                q.push(next);
            }
        }
    }
    return sum; 
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int minSum = INF, result = 0;

    for (int i = 1; i <= N; i++) {
        int kevin = bfs(i); 
        if (kevin < minSum) {
            minSum = kevin;
            result = i;
        }
    }

    cout << result << '\n'; 
    return 0;
}
