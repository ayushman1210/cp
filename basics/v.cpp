#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
char ch;
int c;
cin>>a>>ch;
cin>>c;
int x=int(ch);
if((a-c)>0 && x==62){
    cout<<"Right";
}
else if((a-c)<0 && x==60){
    cout<<"Right";
}
else if((a-c)==0 && x==61){
    cout<<"Right";
}
else{
    cout<<"Wrong";
}
}