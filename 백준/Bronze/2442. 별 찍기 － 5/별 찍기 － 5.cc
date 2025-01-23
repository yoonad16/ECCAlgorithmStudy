#include <iostream>
using namespace std;

int n;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    
    cin >> n;
    for (int i=1; i<(n+1); i++){
        cout << string(n-i,' ');
        cout << string(i*2-1,'*');
        cout << ' ';
        cout << '\n';
    }

}