#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
int ld=a%10;
a=a/10;
int ld1=a%10;
if(ld%ld1==0 || ld1%ld==0){
cout<<"YES";
}
else{
    cout<<"NO";
}
}