#include<bits/stdc++.h>
using namespace std;
int main(){
long long t;
cin>>t;
for(long long i=1; i<t; i++){
    for(long long j=1; j<t; j++){
        if(((j*j)+(i*i))==t*t){
            cout<<i<<" "<<j<<endl;
        }
    }
}
}