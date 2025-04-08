#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
bool value=false;
vector<long long> v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int x;
cin>>x;
for(int i=0; i<t; i++){
    if(v[i]==x){cout<<i; value=true; break;}
 else{ value=false;}
}
if(value==false){cout<<-1;}
}