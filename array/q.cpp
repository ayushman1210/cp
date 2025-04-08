#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ld=0;
int rev=0;
while(t--){
    int n;
    cin>>n;
    while(n>0){
ld=n%10;
n=n/10;

cout<<ld<<' ';
ld=ld*0;
}
cout<<endl;
}
}