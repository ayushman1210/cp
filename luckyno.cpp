#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int ld=0;
int count=0;
while(t>0){
    ld=t%10;
if(ld==7 || ld==4){
    count++;
}
t/=10;
}
if(count==7 || count==4){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}