//Given an array, print the numbers that are smaller than each element of the array.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[6] = {3, 5, 2, 6, 4, 9};

    for (int i = 0; i < 6; i++)
    {
        int x = a[i];
        cout << x << "---->";

        for (int j = 0; j < 6; j++)
        {
            if (a[j] < x)
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

