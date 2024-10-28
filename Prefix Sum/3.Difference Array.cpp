/*
      n=7
      index=0 1 2 3 4 5 6 
      array=2 3 4 5 6 7 8

      query=3
        l  r  v

     / case 1: 0 3 2
       array=4 5 6 7 6 7 8
       
      case 2:1 5 1
      array=4 6 7 8 7 8 8
      
      case 3: 4 6 3 
      array= 4 6 7 8 10 11 11  /--->This part are  worst tecknique

   logic  part--->  dif[n+1]={0};
           dif =0 0 0 0 0 0 0    operation after dif= 2 1 0 0 -2 0 -1
                              it prefix  is = 2 2 2 2 2 2 0
                              then  it add the given array value
                                array= 4 5 6 7 6 7 8
       
     query =3
      {
     case: 0 3 2
      dif[l]+=v
      dif[r+1]-=v
      }
      
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=0;i<n;i++)cin>>ar[i];
 
    int dif[n+2]={0};
 
    int q;
    cin>>q;
    while(q--)
    {
        int l,r,v;
        cin>>l>>r>>v;
        dif[l]+=v;
        dif[r+1]-=v;
    }
 
    for(int i=1;i<n;i++)dif[i]+=dif[i-1];
 
    for(int i=0;i<n;i++)ar[i]+=dif[i];
 
    for(int i=0;i<n;i++)cout<<ar[i]<<" ";
    cout<<endl;
 
}
