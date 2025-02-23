#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int a;
int b;
int c;
int count=1;
    cin>>n>>a>>b>>c;
    if((a+b+c)==n){
        count=count+2;
    }
    else if((a+b)==n){count=count+1;}
    else if((b+c)==n){count=count+1;}
    else if((a+c)==n){count=count+1;}
    else if((a==n)|| (b==n) || (c==n)){
        count=count;
    }
    else{
        count=n;
    }
    cout<<count;
    }