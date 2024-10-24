#include<bits/stdc++.h>
using  namespace  std;
int main()
{
    int n;
    cin>>n;
    int ar[n+3];
    for(int i=0;i<n;i++)cin>>ar[i];
    int sereja=0,dima=0;
    int l=0;
    int r=n-1;
    int z=0;
    while(l<=r)
    {
        if(z%2==0)
        {
            if(ar[l]>ar[r])
            {
                sereja+=ar[l];
                l++;
            }
            else{
                sereja+=ar[r];
                r--;
            }

        }
        else{
            if(ar[l]>ar[r])
            {
                dima+=ar[l];
                l++;
            }
            else{
                dima+=ar[r];
                r--;
            }

        }
        z++;
    }
    cout<<sereja<<" "<<dima<<endl;
}
















 
