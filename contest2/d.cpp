#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long sum=0;
long long  a; long long  b;
cin>>a>>b;
for( int i=a; i<=b; i++)
{
    sum+=i;
}
cout<<sum<<endl;
    }
}