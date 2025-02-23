#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int c=0;
string x=to_string(t);
for(int i=0; i<x.length()-1; i++){
    if(int(x[i])==int(x[i+1])){
        c--;
        if(c==0){
            break;
        }
    }
    else{
        c=6;
    } 
}
cout<<c;
}