#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int p;
int q;
int count=0;
for(int i=0; i<n;i++){
    cin>>p>>q;
    if(q>p && (q-p)>=2){
        count++;
    }
    else{
        continue;
    }
}
cout<<count;
}