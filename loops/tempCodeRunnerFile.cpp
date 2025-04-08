#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
bool value=true;
for(int i=2; i<t; i++){
    if(t==2){ cout<<"YES"; break;}
    if(t%i==0){value=false; break;}
    else{
        value=true;
    }
}
if(value==true){cout<<"YES";}
else{cout<<"NO";}
}