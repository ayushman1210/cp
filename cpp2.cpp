//young physicist 

#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int sum=0;
int arr[t][3];
for(int i=0; i<t; i++){
    for(int j=0; j<3; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<t; i++){
    for(int j=0; j<3; j++){
        sum+=arr[i][j];
    }
}
if(sum==0){cout<<"YES";}
else{cout<<"NO";}
}