#include <bits/stdc++.h>
using namespace std;

void prime_factor(int n)
{
    vector<int> prime_factors;
    
  
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    
  
    if (n > 1)
    {
        prime_factors.push_back(n);
    }

   
    for (int i = 0; i < prime_factors.size(); i++)
    {
        if (i > 0) cout << "*"; 
        cout << prime_factors[i];
    }
    
    cout << endl; 
}

int main()
{
    int n;
    cin >> n;
    prime_factor(n); 
      return 0;
}

