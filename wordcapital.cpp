#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
int x;
getline(cin,s);
if((int(s[0]))>=97 && (int(s[0]))<=122){
    x=int(s[0]);
    (s[0])=(x-32);
}
for(int i=0; i<s.length(); i++){
    cout<<s[i];
}
}