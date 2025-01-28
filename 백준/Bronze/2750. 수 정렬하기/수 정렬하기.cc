#include <iostream>
#include <vector>
#include <utility>
using namespace std;

void insertionsort(vector<int>& A, int n){
    for (int i=1; i<n; i++){
        int j = i;
        while(j>0 && A[j]<A[j-1]){
            swap(A[j], A[j-1]);
            j--;
        }
    }
}

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    int n, num;
    vector<int> numbers;

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> num;
        numbers.push_back(num);
    }

    insertionsort(numbers, n);
    for (int num:numbers){
        cout << num << '\n';
    }

    return 0;
}