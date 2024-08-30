#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void search(string s1,string subs)
{
    
    int a = s1.find(subs);
    if (a>=0)
    {
        cout << "True" << endl;
    }
    else
        cout <<"False" << endl;
}

int main()
{
    string s1,subs;
    cout<<"Enter the String"<<endl;
    cin>>s1;

    cout<<"Enter the sub_String"<<endl;
    cin>>subs;

    search(s1,subs);

    
}

