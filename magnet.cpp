#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a;
int sum=0;
while(t--){
    cin>>a;
    sum+=a;
    }
    if((sum%4)==0 && sum>0){
        cout<<sum/4;
    }
    else if((sum%4)!=0){
        cout<<(sum/4)+1;
    }
}