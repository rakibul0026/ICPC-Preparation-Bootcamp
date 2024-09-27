

#include<bits/stdc++.h>
using  namespace  std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
 #define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

void solve(int n,int m,string op)
{
    if(n==0&&m==0)
    {
        cout<<op<<" ";
        return ;
    }
    if(n==0)
    {
        string op1=op;
        op1+=')';
        m--;
        solve(n,m,op1);
    }
    else if(n==m)
    {
        string op1=op;
        op1+='(';
        n--;
        solve(n,m,op1);
    }
    else{
        string op1=op;
        op1+='(';
        string op2=op;
        op2+=')';
        solve(n-1,m,op1);
        solve(n,m-1,op2);
    }
}

int main()
{
    while(1)
    {
        int n;
        cin>>n;
        int m=n;
        string op="";
        solve(n,m,op);
        cout<<nl;
    }
}
