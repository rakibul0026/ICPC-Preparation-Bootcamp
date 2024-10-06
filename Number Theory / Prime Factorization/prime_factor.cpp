#include <bits/stdc++.h>
using namespace std;

void prime_factor(int n)
{
    vector<int> prime_factor;
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factor.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
    {
        prime_factor.push_back(n);
    }

    for (int prime : prime_factor)
    {
        cout << prime << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    prime_factor(n);
}

