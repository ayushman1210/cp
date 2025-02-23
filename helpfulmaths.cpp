#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i=0; i<s.length()-1;i++){
    for(int j=0; j<s.length(); j++){
if(int(s[i])==43){continue;}
if(s[i]>=s[j]){
    int temp=s[i];
    s[i]=s[j];
    s[j]=temp;
}
    }
}
for(int i=0; i<s.length(); i++){
    cout<<s[i];
}
}