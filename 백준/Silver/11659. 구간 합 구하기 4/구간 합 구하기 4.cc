#include <iostream>
#include <deque>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    int sum = 0;
    cin >> n >> m;
    deque <int> prefix;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        sum += x;
        prefix.push_back(sum);
    }

    for (int k=0; k<m; k++){
        int i, j;
        cin >> i >> j;
        if (i>= 2){
            cout << prefix[j-1]-prefix[i-2] << '\n';
        }  
        else if (i == 1){
            cout << prefix[j-1] << '\n';
        }
        
    }
}