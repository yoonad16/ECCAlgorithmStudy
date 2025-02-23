#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<vector<int>> board(2, vector<int>(n));
        vector<vector<int>> dp(2, vector<int>(n, 0));

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < n; j++)
                cin >> board[i][j];

        if (n == 1) {
            cout << max(board[0][0], board[1][0]) << '\n';
            continue;
        }

        dp[0][0] = board[0][0];
        dp[1][0] = board[1][0];

        if (n > 1) {
            dp[0][1] = board[1][0] + board[0][1];
            dp[1][1] = board[0][0] + board[1][1];
        }

        for (int i = 2; i < n; i++) {
            dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + board[0][i];
            dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + board[1][i];
        }

        cout << max(dp[0][n - 1], dp[1][n - 1]) << '\n';
    }

    return 0;
}
