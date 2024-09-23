/*   Input:
     2
     4
     1 6 3 20
     3
     2 2 2    */

     #include <iostream>
#include <queue>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int n; // Number of elements in the current test case
        cin >> n;

        priority_queue<int> pq; // Max-heap (default)

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            pq.push(x); // Insert elements into the priority queue
        }

        // Example: Process elements from the priority queue
        // Printing and removing elements in decreasing order
        cout << "Priority Queue output: ";
        while (!pq.empty()) {
            cout << pq.top() << " "; // Access the largest element
            pq.pop();                // Remove the largest element
        }
        cout << endl;
    }

    return 0;
}
