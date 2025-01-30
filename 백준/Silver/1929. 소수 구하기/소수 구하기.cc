#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    for (int i=n; i<=m; i++){
        bool flag = true;
        if (i<2) {continue;}
        for (int j = 2; j*j <= i; j++){
            if (i%j == 0){
                flag = false;
                break;
            }
        }
        if (flag){cout << i << "\n";
}

    }

}
