/*
    n=5;
    index:  0  1  2   3   4
    value:  2  4  1   5  10
    prefix: 2  6  7  12  22

    Q:
       range:
      l  r = prefix[r] -prefix[l-1]       
      if(l==0) ans=prefix[r]               2 4  = prefix[4] -prefix[1]=22-6=16
                                           0 4 =prefix[4]=22
    





*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
 
    int pre[n+1];
    pre[0]=ar[0];
 
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+ar[i];
    }
 
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)cout<<pre[r]<<endl;
        else cout<<pre[r]-pre[l-1]<<endl;
    }
}
 
