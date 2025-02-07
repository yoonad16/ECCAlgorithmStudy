#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, b; 
    cin >> n >> m >> b;
    vector< vector<int> > arr(n+1, vector<int>(m+1, 0));


    for (int i = 1; i<= n; i++){
        for (int j = 1; j <= m; j++) cin >> arr[i][j];
    }

    int ans = 1e9, h;
    for (int y = 256; y >= 0; y--){
        int tmp = 0;
        int bcnt = b;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                if (arr[i][j] > y){
                    bcnt += (arr[i][j]-y);
                    tmp += (arr[i][j]-y)*2;
                } else if (arr[i][j] < y){
                    bcnt -= (y-arr[i][j]);
                    tmp += (y-arr[i][j]);
                }
            }
        }
        if (bcnt >= 0){
            if (tmp < ans){
                ans = tmp;
                h = y;
            } else if (tmp == ans && y > h){
                h = y;
            }
        }
    }

    cout << ans << " " << h;
    return 0;

}
