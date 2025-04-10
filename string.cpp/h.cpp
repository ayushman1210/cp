#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s;
bool flag=true;
while(t--){
    cin>>s;
    for(int i=0; i<s.size()-2;i++){
        if(s[i]!=s[i+1] && s[i]==s[i+2]){flag=true; break;}
        else {flag=false;}
    }
    if(flag==true){cout<<"Good"<<endl;}
    else{cout<<"Bad"<<endl;}
    }
}