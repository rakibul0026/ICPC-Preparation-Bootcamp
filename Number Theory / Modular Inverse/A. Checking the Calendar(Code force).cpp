/*                                          A. Checking the Calendar
                                           time limit per test1 second
                                           memory limit per test256 megabytes
You are given names of two days of the week.

Please, determine whether it is possible that during some non-leap year the first day of some month was equal to the first day
of the week you are given, while the first day of the next month was equal to the second day of the week you are given. Both 
months should belong to one year.

In this problem, we consider the Gregorian calendar to be used. The number of months in this calendar is equal to 12. The number
of days in months during any non-leap year is: 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31.

Names of the days of the week are given with lowercase English letters: "monday", "tuesday", "wednesday", "thursday", "friday", 
"saturday", "sunday".

Input
The input consists of two lines, each of them containing the name of exactly one day of the week. It's guaranteed that each string 
in the input is from the set "monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday".

Output
Print "YES" (without quotes) if such situation is possible during some non-leap year. Otherwise, print "NO" (without quotes).

Examples
Input
monday
tuesday
Output
NO

Input
sunday
sunday
Output
YES

Input
saturday
tuesday
Output
YES 
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> days = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
    string a, b;
    cin >> a >> b;
    int ind1, ind2;
    for (int i = 0; i < 7; i++)
    {
        if (days[i] == a)
        {
            ind1 = i;
        }
        if (days[i] == b)
        {
            ind2 = i;
        }
    }
    if ((ind1 + 28) % 7 == ind2 || (ind1 + 30) % 7 == ind2 || (ind1 + 31) % 7 == ind2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
