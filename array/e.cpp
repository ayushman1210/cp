#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int min=INT_MAX;
int idx=-1;
vector<long long> v(t);

for(int i=0; i<t; i++){
cin>>v[i];
}
for(int i=0; i<t; i++){
    if(v[i]<min){
        min=v[i];
        idx=i;
    }
}
cout<<min<<" "<<(idx+1);
}
