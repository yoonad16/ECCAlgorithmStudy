#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> table(n+1, 0);
    for (int i=1; i<=n; i++){
        cin >> table[i];
    }

    int sum = 0, count = 0;
    for (int l=1, r=0; l<=n; l++){
        while (r<n && sum < m){
            r++;
            sum += table[r];
        }
        if (sum == m) count++;
        sum -= table[l];
    }

    cout << count;

}