#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a,b;
while(t--){
    cin>>a>>b;
   int remainder=a%b;
   if(remainder==0){
    cout<<0<<endl;
   }
   else{
    int increment=b-remainder;
    cout<<increment<<endl;
   }
   
}
}