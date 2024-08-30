
#include <bits/stdc++.h>
using namespace std;

string left_rotation(string s)
{
    string tem = "";
    for (int i = 1; i < s.size(); i++)
    {
        tem += s[i];
    }
    tem += s[0];
    return tem;
}

int main()
{
    string s = "abcdef";
    cout << "Original string: " << s << endl;
    string rotated = left_rotation(s);
    cout << "Left rotated string: " << rotated << endl;

    return 0;
}
