#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int a;
int b;
int c;
cin>>t;
while(t--){
    cin>>a>>b>>c;
    if(a!=b && b==c){cout<<a<<endl;}
    else if(b!=c && a==c){cout<<b<<endl;}
    else if (c!=a && b==a){cout<<c<<endl;}
    }
}