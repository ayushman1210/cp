#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
string r;;
cin>>r;
cout<<s.length()<<" "<<r.length()<<endl;
cout<<s+r<<endl;
char temp=s[0];
char temp1=r[0];
r[0]=temp;
s[0]=temp1;
cout<<s<<" "<<r;

}