#include<bits/stdc++.h>
using  namespace  std;
void div(string s,int m)
{
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        ans=ans*10 + (s[i]-'0');
        ans=ans%m;
    }
    if(ans%m==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int m;
        cin>>m;
        div(s,m);
    }
}
