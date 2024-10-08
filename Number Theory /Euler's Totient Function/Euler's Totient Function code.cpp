/*
         Euler's Totient Function

       n =

       60 =2,2,3,5

       60 = 2^2 * 3^1 * 5^1

       n = n* (11/2) * (1 - 1/3) * (1 - 1/5)

       n = n* (2-1 / 2) * (3-1 / 3) * (5-1/5) = ans

       1-1/k

       k-1 / k

*/



#include<bits/stdc++.h>
using  namespace  std;
 
void phi(int n)
{
    int ans=n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            //cout<<i<<"^"<<cnt<<endl;
            ans*=(i-1);
            ans/=i;
        }
    }
    if(n>1)
    {
        //cout<<n<<"^"<<1<<endl;
        ans*=n-1;
        ans/=n;
    }
    cout<<ans<<endl;
}
 
int main()
{
    int n;
    cin>>n;
    phi(n);
}
 
 

