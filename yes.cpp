#include<bits/stdc++.h>
using namespace std;
int main(){
bool flag=true;
int t;
string s;
cin>>t;
while(t--){
        getline(cin,s);
        for(int i=0; i<s.length(); i++){
            if((s[i])!='y' && (s[i])!='e' && (s[i])!='s' && (s[i])!='Y' &&  (s[i])!='E' && (s[i])!='S'){
                flag=false;
                break;
            }
            else{
                flag=true;
            }
            
        }
        
        if(flag==false){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
 
}
}