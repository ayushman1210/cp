#include<bits/stdc++.h>
using namespace std;
int main(){
long long a;
long long b;
char ch;
cin>>a>>ch>>b;
int x=int(ch);
if(x==43){
    cout<<a+b;
}
else if(x==45){
    cout<<a-b;
}
else if(x==42){
    cout<<a*b;
}
else{
cout<<(a/b);
}

}