#include<bits/stdc++.h>
using namespace std;
string left_rotation(string s){
    string tem=" ";
    tem+=s.back();
    for(int i=0;i<s.size()-1;i++){
        tem+=s[i];
    }
    return tem;
}

int main(){
    string s;
    cin>>s;
    string ans=left_rotation(s);
    cout<<ans<<endl;
    return 0;
}
