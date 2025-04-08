#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int max=INT_MIN;
int x;
for(int i=0; i<t; i++){
cin>>x;
if(max<=x){
max=x;
}
}
cout<<max;
}