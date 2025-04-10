#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i=0; i<s.size(); i++){
    if(s[i]<97 && s[i]>=65) s[i]+=32;
    else if(s[i]<45) s[i]-=12;
    else if(s[i]>=97) s[i]-=32;
   cout<<s[i];
}
}