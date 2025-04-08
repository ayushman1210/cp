#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0; i<t; i++){
    for(int j=i; j<t-1; j++){
        cout<<" ";
    }
    for(int j=0; j<(2*i+1); j++){
        cout<<"*";
    }
    cout<<endl;
}
for(int i=0; i<t; i++){
    for(int j=0; j<i; j++){
        cout<<" ";
    }
    for(int j=0; j<2*(t-i)-1; j++){
        cout<<"*";
    }
    cout<<endl;
}
}