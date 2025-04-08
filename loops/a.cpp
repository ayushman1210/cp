#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int x;
cin>>x;
int maximum=INT_MAX;
for(int i=1; i<max(t,x); i++){
if(t%i==0 && x%i==0){maximum=(i);}
}
cout<<maximum;
}