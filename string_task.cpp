#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int x=0;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        x=int(s[i]);
        if(int(s[i])==65 || int(s[i])==69 ||int(s[i])==73 || int(s[i])==79 || int(s[i])==85 || int(s[i])==97 || int(s[i])==101 ||int(s[i])==105 || int(s[i])==111 || int(s[i])==117){
            x=46;
        }
         else if(s[i]>=65 && s[i]<91){
            s[i]=x+32;
         }
    }
    for(int i=0; i<s.length(); i++){
        if(i%2==0){cout<<(x);}
    }
}