#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
bool flag=true;
vector<long long> v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
}
int d=(t+1)/2;
for(int i=0 ,j=t-1; j>=d,i<d; i++,j--){
    if(v[i]!=v[j]){
        flag=false;
        break;
    }
}
if(flag==false){
    cout<<"NO";
}
else{
    cout<<"YES";
}
}