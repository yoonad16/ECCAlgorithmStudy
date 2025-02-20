#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, p;
vector<vector<int>> map;
vector<vector<bool>> visited;
int max_sum = 0;
int start_x, start_y;

int dx[] = {1, -1, 0, 0}; 
int dy[] = {0, 0, 1, -1};

void DFS(int x, int y, int direction, int cnt, int sum) {
    visited[x][y] = true;
    max_sum = max(max_sum, sum);

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= n || ny >= m) continue;

        if (visited[nx][ny]) continue;

        int next_cnt = cnt - 1; 
        if (direction != -1 && direction != i) next_cnt -= 1;

        if (next_cnt >= 0) 
            DFS(nx, ny, i, next_cnt, sum + map[nx][ny]);
    }

    visited[x][y] = false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    map.assign(n, vector<int>(m));
    visited.assign(n, vector<bool>(m, false));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> map[i][j];

    cin >> start_x >> start_y >> p;
    DFS(start_x, start_y, -1, p, map[start_x][start_y]);

    cout << max_sum << '\n';
    return 0;
}
