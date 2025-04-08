#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
bool value=false;
vector<long long> v(t);
for(int i=0; i<t; i++){
cin>>v[i];
if(v[i]<0){v[i]=2;}
else if( v[i]>0){v[i]=1;}
else{v[i]=v[i];}
}
for(int i=0; i<t; i++){
    cout<<v[i]<<" ";
}
}