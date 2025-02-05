#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> table(n+1, vector<int>(n+1, 0));
    vector<vector<int>> prefix(n+1, vector<int>(n+1, 0));

    for (int i=1; i<=n; i++){
        for (int j=1; j<=n; j++){
            cin >> table[i][j];
        }
    }

    for (int i =1; i<=n; i++){
        for (int j=1; j<=n; j++){
            prefix[i][j] = table[i][j] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
        }
    }

    for (int k=0; k<m; k++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int result = prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1];

        cout << result << '\n';
    }

}