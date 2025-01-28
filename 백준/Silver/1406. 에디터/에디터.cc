#include <iostream>
#include <list>
#include <sstream>
#include <string>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    list<char> text;
    auto it = text.end();
    string line;

    cin >> line;
    for (char c: line){
        text.push_back(c);
    }

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string func;
        cin >> func;

        if (func == "L"){
            if (it != text.begin()){
                it--;
            }
        } else if (func == "D"){
            if (it != text.end()){
                it++;
            }
        } else if (func  == "B"){
            if (it != text.begin()){
                it = text.erase(--it);
            }
        } else if (func  == "P"){
            char x;
            cin >> x;
            text.insert(it, x);
        }
        }

        for (char c : text){
            cout << c;
        }
        
        return 0;
    }
