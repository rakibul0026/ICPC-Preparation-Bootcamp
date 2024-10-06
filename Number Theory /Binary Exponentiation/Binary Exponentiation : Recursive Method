#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7; 

int binExpRecur(int a, int b)
{
    if (b == 0)
        return 1;
    int res = binExpRecur(a, b / 2);
    res = (res * res) % mod;  
    if (b & 1)
        return (a * res) % mod;
    else
        return res;
}

int32_t main()
{
    int a, b;
    cin >> a >> b;
    cout << binExpRecur(a, b) << endl;
    return 0;
}
