#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> table(n);
    for (int i = 0; i < n; i++) {
        cin >> table[i];
    }

    int start = 0, end = 0, sum = 0;
    int max_visitors = 0, count = 0;

    while (end < n) {
        sum += table[end];

        if (end - start + 1 == m) {
            if (sum > max_visitors) {
                max_visitors = sum;
                count = 1;         
            } else if (sum == max_visitors) {
                count++;            
            }

            sum -= table[start];
            start++;            
        }

        end++; 
    }

    if (max_visitors == 0) {
        cout << "SAD\n";
    } else {
        cout << max_visitors << '\n' << count << '\n';
    }

    return 0;
}
