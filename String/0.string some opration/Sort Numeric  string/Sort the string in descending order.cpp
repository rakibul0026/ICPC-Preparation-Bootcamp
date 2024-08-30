#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s = "3568393839857";
  

    // Sort the string in descending order
    sort(s.begin(), s.end(), greater<char>());
    
    cout << s << endl; // Output: 9988887553333
    

}
