#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<long long > v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
for(int i=t-1; i>=0; i--){
    cout<<v[i]<<" ";
}
}