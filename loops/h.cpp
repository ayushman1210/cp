#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
bool fl=true;
for(int i=2; i<t; i++){
    if(t==2){cout<<"Yes";}
    if(t%i==0){
        continue;
        fl=false;
    }
    else{fl=true;}
}
if(fl=true){
cout<<"Yes";
}
else{cout<<"No";}
}