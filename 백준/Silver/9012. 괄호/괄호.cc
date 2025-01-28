#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n; 

    for (int i = 0; i < n; i++){
        stack <char> s;
        string line;
        cin >> line;

        bool isVPS = true;
        for (char c: line){
            if (c == '('){
                s.push(c);
            } else if (c == ')'){
                if (s.empty()){
                    isVPS = false;
                    break;
                }
                s.pop();
            }

        }

        if (!s.empty()){
                isVPS = false;
            }
            
            cout << (isVPS ? "YES" : "NO") << '\n';
    }
        return 0;
    }
