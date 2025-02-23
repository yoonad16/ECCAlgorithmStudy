#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> wine(n+1, 0);
    vector<int> dp(n+1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> wine[i];
    }

    dp[1] = wine[1];
    if (n >= 2) dp[2] = wine[1] + wine[2];

    for (int i = 3; i <= n; i++) {
        dp[i] = max({dp[i-1], dp[i-2] + wine[i], dp[i-3] + wine[i-1] + wine[i]});
    }

    cout << dp[n] << '\n';
    return 0;
}
