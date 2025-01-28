#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int n, x;
    string fun;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> fun;
        if (fun == "push") {
            cin >> x;
            q.push(x);
        } else if (fun == "pop") {
            if (!q.empty()) {
                cout << q.front() << '\n';
                q.pop();
            } else {
                cout << -1 << '\n';
            }
        } else if (fun == "size") {
            cout << q.size() << '\n';
        } else if (fun == "empty") {
            cout << (q.empty() ? 1 : 0) << '\n';
        } else if (fun == "front") {
            if (!q.empty()) {
                cout << q.front() << '\n';
            } else {
                cout << -1 << '\n';
            }
        } else if (fun == "back") {
            if (!q.empty()) {
                cout << q.back() << '\n';
            } else {
                cout << -1 << '\n';
            }
        }
    }

    return 0;
}
