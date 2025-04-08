#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
string r;
getline(cin,r);
int sum=0;
int sum1=0;
bool flag=false;
for(int i=0; i<s.size(); i++){
if(int(s[i]<97)){(s[i])+=32;}
else if(int(r[i]<97)){(r[i]+=32);}
}
for(int i=0; i<s.size(); i++){
if((s[i])==(r[i])){flag=true;}
else if(int(s[i])>int(r[i])){cout<<1; flag=false; break;}
else if(int(r[i])>int(s[i])){cout<<-1; flag=false; break;}
}
if(flag==true){cout<<0;}
}