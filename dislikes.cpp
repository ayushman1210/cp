#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int a;
int ld=0;
while(t--){
    cin>>a;
    ld=a%10;
    if(a%3==0 &&ld!=3){
        continue;
    }
    else{
        cout<<a<<endl;
    }
    }
}