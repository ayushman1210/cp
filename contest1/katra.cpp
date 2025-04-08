#include<bits/stdc++.h>
using namespace std;
int main(){
int e;
int m;
int b;
cin>>e>>m>>b;
int count=0;
if(e>0 && m>0 && b>0){
    e=e-1;
    m=m-1;
    b=b-1;
    count++;
}
else if(e>=2 && b>=1 && m==0){
    e=e-2;
    b=b-1;
    count++;
}
else if(e>=2 && m>=2 && b>=1){
    e=e-2;
    m=m-2;
    b=b-1;
    count++;
}
cout<<count;
}