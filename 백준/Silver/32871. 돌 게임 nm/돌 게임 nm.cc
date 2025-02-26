#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        long long N, M;
        cin >> N >> M;

        if (N > M) swap(N, M); 

        if (N == 1) 
            cout << "YES\n";
        else if ((M - N) % 2 == 0) 
            cout << "NO\n";
        else 
            cout << "YES\n";
    }

    return 0;
}
