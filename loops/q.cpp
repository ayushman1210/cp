#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
long long t;
cin>>t;
long long ld=0;
while(t>0){
    ld=t%10;
    t=t/10;
    cout<<ld<<" ";
}
cout<<endl;
}
}