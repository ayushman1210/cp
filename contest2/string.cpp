#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
// int count=0;
// for(int i=0; i<s.size(); i++){
//     if(int(s[i])<97) {s[i]+=32;}
//     if(!(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='i' || s[i]=='u')){cout<<"."<<s[i];}
// }
// cout<<endl;
for(auto i:s){i=tolower(i);}
for(auto i:s){cout<<i;}
}