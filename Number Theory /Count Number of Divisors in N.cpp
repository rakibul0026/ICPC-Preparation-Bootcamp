#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

void countDivisors(int n)
{
    set<int> s;
    int sqrt_n = sqrt(n);

    for (int i = 1; i <= sqrt_n; i++)
    {
        if (n % i == 0)
        {
            int x = i;
            int y = n / i;
            s.insert(x);
            s.insert(y);
        }
    }

    // Output the number of divisors
    cout << s.size() << endl;

    // Output the divisors in sorted order
    for (auto it : s)
        cout << it << " ";
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        countDivisors(n);
    }
    return 0;
}
