#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n == 1) {  // Base case
        cout << 1 << " "; 
        return; 
    }
  
    cout << n << " "; 
      print(n - 1);  // Recursive call
}

int main() {
    while(1) {
        int n;
        cin >> n;
        print(n);
        cout << endl;  // Output formatting
    }
}
