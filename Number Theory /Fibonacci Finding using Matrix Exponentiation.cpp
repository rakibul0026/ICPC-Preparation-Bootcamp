#include<bits/stdc++.h>
using  namespace  std;

int ar[3];
int T[3][3], I[3][3];
int mod = 1000000007;

void mul(int A[][3], int B[][3], int n)
{
    int R[n+1][n+1];
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            R[i][j] = 0;
            for(int k = 1; k <= n; k++)
            {
                int x = (A[i][k] * B[k][j]) % mod;
                R[i][j] = (R[i][j] + x) % mod;
            }
        }
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            A[i][j] = R[i][j];
        }
    }
}

int mm(int p)
{
    I[1][1] = I[2][2] = 1;
    I[1][2] = I[2][1] = 0;
    T[1][1] = 0;
    T[1][2] = T[2][1] = T[2][2] = 1;
    
    if(p <= 2) return ar[p];
    
    p--;
    while(p)
    {
        if(p % 2 == 0)
        {
            mul(T, T, 2);
            p /= 2;
        }
        else
        {
            mul(I, T, 2);
            p--;
        }
    }
    
    int ans = (ar[2] * I[2][1] + ar[1] * I[1][1]) % mod;
    return ans;
}

int main()
{
    // faster
    int t;
    t = 1;
    while(t--)
    {
        int i, j, p;
        cin >> ar[1] >> ar[2] >> p;
        int ans = mm(p);
        cout << ans;
    }
    return 0;
}
