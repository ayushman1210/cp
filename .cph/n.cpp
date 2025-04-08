#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
char cs;
if(int(ch)>=65 && int(ch)<97){
 cs= (int(ch)+32);
}
else{
    cs=(int(ch)-32);
}
cout<<cs;
}