#include <iostream>
#include <list>
#include <numeric>
using namespace std;

int main(){
    ios:: sync_with_stdio(0);
    cin.tie(0);

    list<int> bucket;
    bucket.push_back(64);
    
    int val;
    cin >> val;

    int sum = 64;

    while (sum > val){
        int minVal = bucket.back();
        bucket.pop_back();
        sum -= minVal;

        if (sum + (minVal / 2) >= val){
            bucket.push_back(minVal/2);
            sum += (minVal/2);
        } else{
            bucket.push_back(minVal/2);
            bucket.push_back(minVal/2);
            sum += minVal;
        }
    }
    
    int sum2 = 0, count = 0;
    for(int item:bucket){
        if(sum2 == val) break;
        sum2 += item;
        count++;
    }

    cout << count << '\n';
    return 0;
    

    return 0;

} 