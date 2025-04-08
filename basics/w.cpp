#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a;
char ch;
cin>>ch;
cin>>b;
char cs;
cin>>cs;
int c;
cin>>c;
int x=int(ch);
if((a+b)!=c && ch==43){
cout<<a+b;
}
else if((a-b)!=c && ch==45){
    cout<<a-b;
    }
 else if((a*b)!=c && ch==42){
        cout<<a*b;
}
else{
    cout<<"Yes";
}

}