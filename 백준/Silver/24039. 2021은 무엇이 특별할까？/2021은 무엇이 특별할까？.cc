#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int max) {
    vector<bool> isPrime(max + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= max; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= max; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int MAX = 10000;
    vector<int> primes = sieve(MAX);

    for (int i = 0; i < primes.size() - 1; i++) {
        int special = primes[i] * primes[i + 1];
        if (special > n) {
            cout << special << "\n";
            break;
        }
    }

    return 0;
}
