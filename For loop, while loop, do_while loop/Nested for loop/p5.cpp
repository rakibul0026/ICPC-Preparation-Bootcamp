/*pattern be liked
  2 4 6 8 10 
 12 14 16 18 20 
 22 24 26 28 30 
 32 34 36 38 40 
 42 44 46 48 50 */
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           
            x=x+2;
            cout<<x<<" ";
        }
        cout<<endl;
    }
}
