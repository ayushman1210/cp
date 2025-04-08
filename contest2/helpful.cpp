#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
string r;
for(int i=0; i<s.size(); i+=2){
  r+=s[i];
}
sort(r.begin(),r.end());
cout<<r[0];
for(int i=1; i<r.size(); i++){
    cout<<"+"<<r[i];
}
}