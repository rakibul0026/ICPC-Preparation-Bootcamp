/*Sum Of All SubArray

n=4

index: = 1 2 3 4 
      ar: = 3 2 4 1

(3),(3,2),(3,2,4),(3,2,4,1),(2),(2,4),(2,4,1), (4), (4,1),(1)
(3)+(3+2)+(3+2+4)+(3+2+4+1)+(2)+(2+4)+(2+4+1)+(4)+(4+1)+(1) = ans
3+3+2+2+3+4+3+2+4+1+2+2+4+2+4+1+4+4+1+1=ans

3=4 2=6 4-6 1=4 
4*3+ 2*6 + 4*6 + 1*4=ans*

 i*(n-i+1)=3*26
    
    /


#include<bits/stdc++.h>
using  namespace  std;
int solve(int ar[],int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*(n-i+1))*ar[i];
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+4];
        for(int i=1;i<=n;i++)cin>>ar[i];
        cout<<solve(ar,n)<<endl;
    }
    return 0;
}
 
