#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count = 0;
    int n;
    cin >> n;

    for (int i=0; i<n; i++){
        int x;
        cin >> x;

        bool flag = true;
        if (x<2) flag = false;
        for (int j = 2; j*j <= x; j++){
            if (x%j == 0){
                flag = false;
                break;
            }
        }
        if (flag){
            count += 1;
        }

    }

    cout << count;
}
