#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> lst(N + 1, 0);
    vector<int> prefix(N + 1, 0);
    lst[0] = 1; 
    prefix[1] = 1;

    for (int i = 1; i <= N; i++) {
        int q, x, y;
        cin >> q >> x >> y;

        int cnt = prefix[y] - prefix[x - 1];

        if (q == 1) { 
            if (cnt < (y - x + 1)) { 
                cout << "No\n";
                lst[i] = 0;
            } else { 
                cout << "Yes\n";
                lst[i] = 1;
            }
        } else { 
            if (cnt > 0) { 
                cout << "No\n";
                lst[i] = 0;
            } else { 
                cout << "Yes\n";
                lst[i] = 1;
            }
        }

        prefix[i + 1] = prefix[i] + lst[i]; 
    }

    return 0;
}
