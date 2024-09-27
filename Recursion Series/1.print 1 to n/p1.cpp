#include<bits/stdc++.h>
using namespace std;

void print(int n) {
    if(n == 1) {  // Base case
        cout << 1 << " "; 
        return; 
    }
    print(n - 1);  // Recursive call
    cout << n << " "; 
}

int main() {
    while(1) {
        int n;
        cin >> n;
        print(n);
        cout << endl;  // Output formatting
    }
}
