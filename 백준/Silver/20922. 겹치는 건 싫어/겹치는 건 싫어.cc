#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> table(n);
    for (int i = 0; i < n; i++) {
        cin >> table[i];
    }

    vector<int> count(100001, 0);
    int l = 0, r = 0, max_length = 0;

    while (r < n) {
        count[table[r]]++; 

        while (count[table[r]] > k) {
            count[table[l]]--;
            l++;
        }

        max_length = max(max_length, r - l + 1);
        r++;
    }

    cout << max_length << '\n';
    return 0;
}
