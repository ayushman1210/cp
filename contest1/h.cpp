#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
long long k;
long long a;
cin>>n>>k>>a;
long long result=(n*k)/a;
int result1=(n*k)/a;
if(INT_MIN<=result<=INT_MAX){
    cout<<"int";
}
else if(result==result1){
    cout<<"long long";
}
}