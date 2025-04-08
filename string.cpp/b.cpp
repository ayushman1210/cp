#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
for(int i=0; i<s.size(); i++ ){
    if(s[i]>92 || s[i]<92){
        cout<<s[i];
}
if(s[i]==92){
    cout<<s[i];break;}
else {continue;}
}
}