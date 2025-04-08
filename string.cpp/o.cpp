#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
string s;
cin>>s;
for(int i=0; i<t-1; i++){
  for(int j=i+1; j<t; j++){
    if((s[i])>(s[j])){
        char temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
  }
}
for(int i=0; i<t; i++){
    cout<<s[i];
}
}