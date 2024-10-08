/*
    mod=10^9+7

    n           n!
      c    = ---------------
        r     r!*(n-r)!


            n!
        -----------  =(n1 * r1^-1 *k^-1)%mod
           r1*k

           (n1% mod) *(r1^mod-2)% mod) *((k^mod-2)%mod)%mod

 */

#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long int fact(long long int n)
{
    long long int ans = 1;
    for (long long int i = 2; i <= n; i++)
    {
        ans = (ans * i) % mod;
    }
    return ans % mod;
}
long long int power(long long int base, long long int p)
{
    long long int ans = 1;
    while (p)
    {
        if (p % 2 == 1)
        {
            ans = (ans * base) % mod;
            p--;
        }
        else
        {
            base = (base * base) % mod;
            p /= 2;
        }
    }
    return ans % mod;
}
long long int nCr(long long int n1, long long int r1, long long int k)
{
    long long int ans = n1, ans1, ans2;
    ans1 = power(r1, mod - 2) % mod;
    ans2 = power(k, mod - 2) % mod;
    ans = (ans * ans1) % mod;
    ans = (ans * ans2) % mod;
    return ans % mod;
}

int main()
{
    long long int n, r, n1, r1, k, ans;
    cin >> n >> r;
    n1 = fact(n);
    r1 = fact(r);
    k = fact(n - r);
    ans = nCr(n1, r1, k);
    cout << ans << endl;
    return 0;
}

