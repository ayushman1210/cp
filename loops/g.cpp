#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int x;
while(t--){
    int f=1;
    cin>>x;
while(x>0){
    f=x*f;
    x--;
}
cout<<f<<endl;
}
}