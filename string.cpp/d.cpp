#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string r;
cin>>r;
string t=s+r;
cout<<s.size()<<" ";
cout<<r.size()<<endl;
cout<<t<<endl;
for(int i=0; i<s.size(); i++){
char temp=r[0];
r[0]=s[0];
s[0]=temp;
cout<<s[i];
}
cout<<" ";
for(int i=0; i<r.size(); i++){
    char temp=r[0];
    r[0]=s[0];
    s[0]=temp;
    cout<<r[i];
    }
// cout<<r;
}