#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int N, M;
vector<vector<int>> box;
queue<pair<int, int>> q;
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

int bfs() {
    int days = 0;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;

            if (box[nx][ny] == 0) {
                box[nx][ny] = box[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (box[i][j] == 0) return -1;
            days = max(days, box[i][j]);
        }
    }

    return days - 1; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> M >> N; 
    box.assign(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> box[i][j];
            if (box[i][j] == 1) {
                q.push({i, j});
            }
        }
    }

    cout << bfs() << '\n';
    return 0;
}
