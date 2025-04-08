#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
long long a;
long long count=0;
long long max=count;
while(t--){
    cin>>a;
    count=count*0;
    while(a>0){
        if(a%2!=0){break;}
        else{
            a=a/2;
            count++;
        }
    }
    if(max<count){max=count;}
}
cout<<max;
}