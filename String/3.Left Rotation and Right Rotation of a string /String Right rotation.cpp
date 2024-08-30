#include <bits/stdc++.h>
using namespace std;

string right_rotation(string s)
{

    string tem;
   
    for (int i = 1; i <s.size(); i++)
    {
        tem += s[i];
    }
     tem += s.front();

    return tem;
}

int main()
{
    string s;
    cin >> s;
    string ans = right_rotation(s);
    cout << ans << endl;
    return 0;
}

