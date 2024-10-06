/*Logic->(2^5)
   
         base         power        ans
    1->  2              5           1      if power is odd -> ans = (ans*base) 
                                             and decrease power

    2->  2              4           2      if power is Even -> ans = (base*base) 
                                             and  power=power/2
         
         mod Use ->mod use  because when power is a large value value
                   it does not work properly

 */  //complexity->O(log(n))

#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int func(int base, int power, int mod)
{
    int ans = 1;
    while(power)
    {
        if(power%2==1)
        {
          ans = (ans*base)%mod;
          power--;
        }
        else 
        {
          base = (base*base)%mod;
          power = power/2;
        }
    }
    return ans;
}
 
signed main()
{
    int base,power,mod=1e9;
    cin>>base>>power;
    cout<<func(base,power,mod)<<endl;
    return 0;
}
 

