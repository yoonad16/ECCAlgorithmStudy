#include<iostream>
#define MOD 16769023
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);

    int n; 
    cin >> n;
    
    int sum = 2;  
    for (int i = 3; i <= n; i += 2) {  
        sum = (sum * 2) % MOD;
    }

    cout << sum;
    return 0;
}
