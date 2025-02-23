#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
string s;
cin>>t>>s;
int count=0;

if(s.length()!=t){
    return 1;
}
for(int i=1; i<=t; i++){
    if(s[i]==s[i-1]){count+=1;}
    else{continue;}
}
cout<<count;
}