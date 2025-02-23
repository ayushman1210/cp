#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int n;
int ld=0;
int ld1=0;
int sum=0;
int sum1=0;
int count=1;
while(t--){
    cin>>n;
    while(count<=3){
        ld=n%10;
        n/=10;
        count++;
        sum+=ld;
    }
    while(count>3 && count<=6){
        ld1=n%10;
        n/=10;
        count++;
        sum1+=ld1;
    }
    if(sum==sum1){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    count=count*0+1;
    sum*=0;
    sum1*=0;
    }
}