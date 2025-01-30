#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    deque <int> structure;
    for (int i=0; i<n; i++){
        int qs;
        cin >> qs;
        structure.push_back(qs);
    }

    deque <int> queuestack;
    for (int i=0; i<n; i++){
        int element;
        cin >> element;

        if (structure[i] == 0){
            queuestack.push_back(element);
        } 
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        queuestack.push_front(x);
        cout << queuestack.back() << " ";
        queuestack.pop_back();
    }
    return 0;

    }
