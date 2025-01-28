#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int n, x;
    string fun;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> fun;
        if (fun == "push"){
            cin >> x;
            s.push(x);
        } 
        else if (fun == "pop"){
            if (!s.empty()){
                cout << s.top() << '\n';
                s.pop();
            } else {
                cout << -1 << '\n';
            }
        } 
        else if (fun == "size"){
            cout << s.size() << '\n';
        } 
        else if (fun == "empty"){
            if (s.empty()){
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        } 
        else if (fun == "top"){
            if (!s.empty()){
                cout << s.top() << '\n';
            } else{
                cout << -1 << '\n';
            }
        }  
        
    }

    return 0;
}
