#include <bits/stdc++.h>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int* arr = new int[N];
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + N);
    
    if (N % 2 == 1) {
        cout << fixed << setprecision(1) << (double)arr[N / 2] << endl;
    } else {
        cout << fixed << setprecision(1) << (arr[N / 2 - 1] + arr[N / 2]) / 2.0 << endl;
    }
    
    delete[] arr;
    
    return 0;
}
