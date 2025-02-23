#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int n;
int count=0;
int i=1; 
cin>>t;
while(t--){
    cin>>n;
    int j=n-1;
 while(i<n && j>0){
    if((i+j)==n){count++; i++; j--;}
    else{ i++; j--;}
 }
 cout<<(count/2)<<endl;
    }
}