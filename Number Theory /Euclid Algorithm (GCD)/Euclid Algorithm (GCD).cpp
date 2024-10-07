
#include <iostream>
using namespace std;
int gcd(int n, int m)
{
    if (n % m == 0)
        return m;
    return gcd(m, n % m);
}

int main()
{
    int N, M;
    cin >> N >> M;
   cout<< gcd(N, M);


    return 0;
}

