#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int n;
int b[n];
int count=0;
cin>>t;
while(t--){
    cin>>n;
    for(int i=2; i<n; i++){
        cin>>b[i];
    
    if(b[n-2]==0 && b[n-1]==1 || b[n-2]==1 && b[n-1]==0){
        continue;
    }
    else{count++;}
}
    if(count>0){
        cout<<"YES"<<endl;
        count*=0;
    }
    else{
        cout<<"NO"<<endl;
        count*=0;
    }
}
}