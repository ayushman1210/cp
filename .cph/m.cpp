#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
int x= int(ch);
if(64<x && x<97){
    cout<<"ALPHA"<<endl<<"IS CAPITAL";
}
else if(96<x && x<124){
    cout<<"ALPHA"<<endl<<"IS SMALL";
}
else{
    cout<<"IS DIGIT";
}

}