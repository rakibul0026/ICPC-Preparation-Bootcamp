 
#include<bits/stdc++.h>
using  namespace  std;
 
void print(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<endl;
}
 
int main()
{
   vector<int>v;
   int n;
   cin>>n;
   int x;
   for(int i=0;i<n;i++)
   {
       cin>>x;
       v.push_back(x);
   }
 
   while(next_permutation(v.begin(),v.end()))
   {
       print(v,n);
   }
}
