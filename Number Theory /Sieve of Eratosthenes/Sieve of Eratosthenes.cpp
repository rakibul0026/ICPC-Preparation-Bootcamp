#include<bits/stdc++.h>
using namespace std;

void sieve(int N) {
    vector<bool> isPrime(N+1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not primes

    for(int i = 2; i * i <= N; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Output all prime numbers up to N
    for(int i = 2; i <= N; i++) {
        if(isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N;
    sieve(N);
}

