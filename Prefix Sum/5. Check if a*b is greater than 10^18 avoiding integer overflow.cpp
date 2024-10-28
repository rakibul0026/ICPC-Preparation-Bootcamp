#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b;
    long long int p = 1e18; 

    cin >> a >> b;
    long long int c = p / a;

    if (b > c)
        cout << "Big" << endl;
    else
        cout << "Small" << endl;

    return 0;
}
