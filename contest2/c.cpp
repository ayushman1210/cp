#include<bits/stdc++.h>
using namespace std;
int main(){
long long n;
long long k;
cin>>n>>k;
vector<long long>v(n);
for(int i=0; i<n; i++){
   cin>>v[i];
}
sort(v.begin(),v.end());
for(int i=0; i<k; i++){
    cout<<v[i]<<" ";
}
}