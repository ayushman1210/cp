#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<long long> v(t);
for(int i=0; i<t; i++){
    cin>>v[i];
    if(v[i]<=10){
        cout<<"A"<<"["<<i<<"]"<<" = "<<v[i]<<endl;
    }
}
}