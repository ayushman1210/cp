#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
int q;
cin>>t>>q;
if(t==0 && q==0){
    cout<<"NO";
}
else if((t+1==q) || t==q || t-1==q){
    cout<<"YES";
}

else{
    cout<<"NO";
}
}