#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

 while(t--){
    int x;
    cin>>x;
    vector<long long >v(x);
    for(int i=0; i<x; i++){
        cin>>v[i];
    }
    int small=INT_MAX;
    for(int i=1; i<=x-1; i++){
        for(int j=i+1; j<=x; j++){
            int sum=v[i]+v[j]+j-i;
          small=min(small,sum);
        }
    }
    cout<<small<<endl;
}
}