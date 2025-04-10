#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s;
while(t--){
    cin>>s;
    int t=s.size();
    if(s.size()>10){
        cout<<s[0]<<t-2<<s[t-1]<<endl;
        }
    else {cout<<s<<endl;}
    }
}