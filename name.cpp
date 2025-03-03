#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int r;
while(t--){
    cin>>r;
    if(r<=1399){cout<<"Division 4"<<endl;}
   else if(1600<=r && r<1900){cout<<"Division 2"<<endl;}
   else if(1400<=r && r<1600){cout<<"Division 3"<<endl;}
   else if(r>=1900){cout<<"Division 1"<<endl;}
    }
}