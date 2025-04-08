#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
int count1=0;
for(int i=0; i<s.size(); i++){
    if(int(s[i])<97){count++;}
    if(int(s[i])>=97){count1++;}
}
for(int i=0; i<s.size(); i++){
if(count==count1 && s[i]<97){s[i]+=32;}
    else if(count>count1 && s[i]>=97){s[i]-=32;}
    if(count<count1 && s[i]<97){s[i]+=32;}
    cout<<s[i];
}
}