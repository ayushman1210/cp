#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n; 
    while(n--){
int t;
cin>>t;
int x; 
cin>>x;
int sum=0;
int first=max(t,x);
int second=min(t,x);
for(int i=second+1; i<first; i++){
    if(i%2!=0){
        sum+=i;
    }
    else{continue;}
}
cout<<sum<<endl;
}
}
