#include <iostream>
#include <vector>
using namespace std;

const int MAX_VALUE = 10000;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    
    vector<int> count(MAX_VALUE + 1, 0);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        count[num]++;
    }

    for (int i = 1; i <= MAX_VALUE; i++) {
        while (count[i]--) {
            cout << i << '\n';
        }
    }

    return 0;
}
