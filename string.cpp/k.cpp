#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
string s;
string r;
while(t--){
    cin>>s;
    cin>>r;
    int t=min(s.size(), r.size());
    int m=max(s.size(),r.size());
    for(int i=0; i<t; i++ ){
        cout<<s[i]<<r[i];
    }
    if(s.size()>r.size()){
        for(int i=t; i<m; i++){
            cout<<s[i];
        }
    }
    else if(s.size()<r.size()){
        for(int i=t; i<m; i++){
            cout<<r[i];
        }
    }
    cout<<endl;
    }
}