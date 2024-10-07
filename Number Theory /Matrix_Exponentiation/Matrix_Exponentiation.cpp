#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int llu;
const ll mod = 1000000007;
#define N 101

ll ar[N][N], I[N][N];

// Matrix multiplication (A * B) % mod, where matrices are size n x n
void mul(ll A[][N], ll B[][N], ll n) {
    ll R[N][N];
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            R[i][j] = 0;
            for (ll k = 1; k <= n; k++) {
                R[i][j] = (R[i][j] + (A[i][k] * B[k][j]) % mod) % mod;
            }
        }
    }
    // Copy result back to matrix A
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            A[i][j] = R[i][j];
        }
    }
}

// Matrix exponentiation (A^p) % mod
void power(ll A[][N], ll n, ll p) {
    // Initialize identity matrix I
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            I[i][j] = (i == j) ? 1 : 0;
        }
    }

    // Perform matrix exponentiation
    while (p) {
        if (p % 2 == 1) {
            mul(I, A, n);  // Multiply current I with A
            p--;
        } else {
            mul(A, A, n);  // Square the matrix A
            p /= 2;
        }
    }

    // Copy result from identity matrix I to matrix A
    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= n; j++) {
            A[i][j] = I[i][j];
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);  // For faster I/O
    
    ll t;
    cin >> t;
    while (t--) {
        ll n, p;
        cin >> n >> p;
        
        // Input the matrix
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= n; j++) {
                cin >> ar[i][j];
            }
        }
        
        // Compute A^p
        power(ar, n, p);
        
        // Output the result
        for (ll i = 1; i <= n; i++) {
            for (ll j = 1; j <= n; j++) {
                cout << ar[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}

