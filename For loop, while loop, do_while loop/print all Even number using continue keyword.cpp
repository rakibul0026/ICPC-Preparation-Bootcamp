
//print all Even number using continue keyword
// 0 2 4 6 8 10 12 14 16 18 20 
#include <bits/stdc++.h>
using namespace std;
int main()
{

    for(int i=0;i<=20;i++){
        if(i%2==1)
        continue;
        cout<<i<<" ";
    }
}
