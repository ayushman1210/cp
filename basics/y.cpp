#include<bits/stdc++.h>
using namespace std;
int main(){
long long a;
long long b;
long long c;
long long d;
cin>>a>>b>>c>>d;
long long pro=((a%100)*(b%100)*(c%100)*(d%100))%100;
if(pro<10){
    cout<<"0"<<pro;
}
else{
    cout<<pro;
}
}