/*
                      Euler Totient Function

Problem
In number theory, the totient 
 of a positive integer N is defined as the number of positive integers less than or equal to N that are co-prime to N.

Given an integer N. Compute the value of the totient .

Input:
First and the only line of input contains single integer N.

Output:
Print the 
 in a single line.

Sample Input
5
Sample Output
4
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
 
 
 
 
 
 
