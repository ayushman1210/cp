#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
int x=int(ch);
if(x==122){
x=97;
}
else{
    x=x+1;
}
cout<<char(x);
}