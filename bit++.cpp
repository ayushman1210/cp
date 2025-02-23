#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int count=0;
while(t--){
    string s;
    getline(cin,s);
    if(s=="++X"){ count=count+1;}
    else if(s=="--X"){count=count-1;}
    else if(s=="X--"){count=count-1;}
    else if (s=="X++"){count=count+1;}
    cout<<count;
    }
    // cout<<count;
}