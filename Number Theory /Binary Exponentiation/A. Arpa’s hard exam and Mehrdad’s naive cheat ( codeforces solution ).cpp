/*A.                        Arpa’s hard exam and Mehrdad’s naive cheat
                              time limit per test1 second
                              memory limit per test256 megabytes
There exists an island called Arpa’s land, some beautiful girls live there, as ugly ones do.

Mehrdad wants to become minister of Arpa’s land. Arpa has prepared an exam. Exam has only one question, given
n, print the last digit of 1378n.


Mehrdad has become quite confused and wants you to help him. Please help, although it's a naive cheat.

Input
The single line of input contains one integer n (0  ≤  n  ≤  109).

Output
Print single integer — the last digit of 1378n.

Examples
Input
1
Output
8

Input
2
Output
4

Note
In the first example, last digit of 13781 = 1378 is 8.

In the second example, last digit of 13782 = 1378·1378 = 1898884 is 4.*/


#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int func(int base, int power, int mod)
{
    int ans = 1;
    while(power)
    {
        if(power%2==1)
        {
          ans = (ans*base)%mod;
          power--;
        }
        else 
        {
          base = (base*base)%mod;
          power = power/2;
        }
    }
    return ans;
}
 
signed main()
{
    int power;
	cin>>power;
	cout<<func(8,power,10);
	return 0;
}
 

