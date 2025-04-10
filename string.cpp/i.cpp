#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
string r=s;
reverse(s.begin(),s.end());
string t=s;
// cout<<t;
if(t==r){cout<<"YES";}
else{cout<<"NO";}
}