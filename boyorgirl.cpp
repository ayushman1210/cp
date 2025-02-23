#include<bits/stdc++.h>
using namespace std;
int main(){
int count=0;
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<=s.length(); j++){
            if(s[i]==s[j]){count++; break;}
        }
    }
    int res=s.length()-count;
    if((res%2)==0){cout<<"CHAT WITH HER!";}
    else{cout<<"IGNORE HIM!";}
   
}