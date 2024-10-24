#include<bits/stdc++.h>
using  namespace  std;
 
void solve(int ar[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        int x =ar[i];
        int l=0;
        int r=i-1;
        while(l<r)
        {
            int sum=ar[l]+ar[r];
            if(sum==x)
            {
                cout<<"("<<x<<","<<ar[l]<<","<<ar[r]<<")"<<endl;
                return;
            }
            if(sum>x)r--;
            else l++;
        }
    }
    cout<<"No Such Triplates exists"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    solve(ar,n);
}
 
