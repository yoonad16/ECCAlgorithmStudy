#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n >> m;
    vector<int> arr(n+1, 0);
    int x, y;

    for(int i=0; i<m; i++){
        cin >> x >> y;
        arr[x]++;
        arr[y]++;
    }
    
    for(int i=1; i<(n+1); i++){
        cout << arr[i];
        cout << '\n';
    }

}