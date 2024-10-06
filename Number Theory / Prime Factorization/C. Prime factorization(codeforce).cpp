/*C.                                            Prime factorization
                                             time limit per test3 seconds
                                          memory limit per test256 megabytes
You are given a positive integer n. Output its prime factorization.

If n = a1b1 a2b2 ... akbk (bi > 0), where ak are prime numbers, the output of your program should look as 
follows: a1*...*a1*a2*...*a2*...*ak*...*ak, where the factors are ordered in non-decreasing order, and
each factor ai is printed bi times.

Input
The only line of input contains an integer n (2 ≤ n ≤ 10000).

Output
Output the prime factorization of n, as described above.

Examples
Input
245
Output
5*7*7
Input
19
Output
19                     */

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

