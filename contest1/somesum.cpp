#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
int a;
int b;
cin>>n>>a>>b;
int digsum=0;
int sum=0;
int ld=0;
while(n--){
   while(n>0){
    ld=n%10;
    n=n/10;
    digsum+=ld;
   }
   if(a<=digsum<=b){
    sum+=n;
   }
else{
    continue;
}
cout<<sum;
}

}