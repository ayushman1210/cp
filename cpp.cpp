#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int n;
int sum=0;
int ld=0;
cin>>t;
while(t--){
cin>>n;
while(n>0){
ld=n%10;
n=n/10;
sum+=ld;
}
cout<<sum<<endl;
sum=sum*0;
}
}