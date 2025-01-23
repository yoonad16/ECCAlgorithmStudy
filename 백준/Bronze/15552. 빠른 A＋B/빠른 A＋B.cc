#include <iostream>
using namespace std;

int a, b, c;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);
    
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> b >> c;
        cout << (b+c) << '\n';
    }
    
}