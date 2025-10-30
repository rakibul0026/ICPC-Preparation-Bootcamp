/**
 * =================================================================
 * |            Contest Template for ICPC / Competitive Programming |
 * =================================================================
 *
 * Language: C++17 (or C++20)
 * Compiler: g++
 *
 * /****************************************************************
 * Author: [Your Name/Handle]
 * Created: [Date]
 * Problem: [Problem Name]
 * ***************************************************************/

// This single header includes all standard C++ libraries.
// It's a GNU extension, but universally supported in competitive programming.
#include <bits/stdc++.h> 

// Using the standard namespace to avoid typing 'std::' repeatedly.
using namespace std;

// =================================================================
// |  Type Aliases & Constants                                     |
// =================================================================

// Common type aliases for shorter, more readable code.
using ll = long long;           // 64-bit integer
using pii = pair<int, int>;   // Pair of integers
using pll = pair<ll, ll>;     // Pair of long longs
using vi = vector<int>;       // Vector of integers
using vl = vector<ll>;        // Vector of long longs
using vpii = vector<pii>;   // Vector of pairs
using vpll = vector<pll>;   // Vector of long long pairs
using mii = map<int, int>;    // Map of int -> int

// Common constants.
const ll INF = 1e18;                // Represents infinity (for graph algorithms, etc.)
const int MOD = 1e9 + 7;            // A common modulo for problems
const double PI = acos(-1.0);       // Mathematical constant Pi

// =================================================================
// |  Macros & Helper Functions                                    |
// =================================================================

// Macros for common operations to reduce typing.
#define pb push_back            // v.pb(x) -> v.push_back(x)
#define mp make_pair            // mp(a, b) -> make_pair(a, b)
#define ff first                // p.ff -> p.first
#define ss second               // p.ss -> p.second
#define all(x) (x).begin(), (x).end() // sort(all(v))
#define sz(x) (int)(x).size()     // Get size of a container
#define_                         // Used for spaces in macro-heavy code

// Loop macros
#define f(i,a,b) for(int i = (a); i < (b); ++i)
#define r(i,a,b) for(int i = (a); i > (b); --i)
#define fe(i,a,b) for(int i = (a); i <= (b); ++i)
#define re(i,a,b) for(int i = (a); i >= (b); --i)

// Helper function for modular exponentiation (fast power)
ll power(ll base, ll exp) {
    ll res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

// Helper function for modular inverse (using Fermat's Little Theorem)
ll modInverse(ll n) {
    return power(n, MOD - 2);
}

// =================================================================
// |  Debugging Template (Optional)                                |
// =================================================================
// Compile with -DLOCAL to enable debugging.
// On your machine: g++ -DLOCAL -std=c++17 file.cpp -o file
// On contest server: g++ -std=c++17 file.cpp -o file

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << endl
#define dbg_vec(v) cerr << #v << " = ["; for(auto &e : v) cerr << e << ", "; cerr << "]" << endl;
#define dbg_pair(p) cerr << #p << " = (" << p.first << ", " << p.second << ")" << endl;
#else
// If not compiled with -DLOCAL, these macros do nothing.
#define dbg(x)
#define dbg_vec(v)
#define dbg_pair(p)
#endif

// =================================================================
// |  Main Solution Function                                       |
// =================================================================

/**
 * @brief Solves a single test case.
 */
void solve() {
    // --- Your code starts here ---

    int n;
    cin >> n;
    vi v(n);
    f(i, 0, n) {
        cin >> v[i];
    }
    
    ll sum = 0;
    for(int x : v) {
        sum += x;
    }
    
    dbg(n);       // Debug: prints "n = [value_of_n]"
    dbg_vec(v);   // Debug: prints "v = [v[0], v[1], ...]"
    
    cout << sum << "\n";

    // --- Your code ends here ---
}

// =================================================================
// |  Main Function (Driver Code)                                  |
// =================================================================

int main() {
    // --- Fast I/O ---
    // This part is crucial for speed.
    // It disables a) syncing with C-style stdio and b) tying cin to cout.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // --- End Fast I/O ---

    // Set precision for floating-point output (optional)
    // cout << fixed << setprecision(10);

    // --- Test Case Handling ---
    int t = 1;
    // cin >> t; // Uncomment this line if there are multiple test cases
    
    while (t--) {
        solve(); // Call the solve function for each test case
    }
    // --- End Test Case Handling ---

    return 0;
}
