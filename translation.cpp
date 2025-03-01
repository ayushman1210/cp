#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d;
int max=a;
cin>>a>>b>>c>>d;
if(a>b && a>c && a>d){
    max=a;
}
if(b>a && b>c && b>d){
    max=b;
}
if(c>b && c>a && c>d){
    max=c;
}
if(d>b && d>c && d>a){
    max=d;
}
if(max==a){
    cout<<max-b<<" "<<max-c<<" "<<max-d;
}
if(max==b){
    cout<<max-a<<" "<<max-c<<" "<<max-d;
}
if(max==c){
    cout<<max-b<<" "<<max-a<<" "<<max-d;
}
if(max==d){
    cout<<max-b<<" "<<max-c<<" "<<max-a;
}
}