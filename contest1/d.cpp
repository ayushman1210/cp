#include<bits/stdc++.h>
using namespace std;
int main(){
long long a;
long long b;
long long c ;
long long d;
bool flag=false;
 cin>>a>>b>>c>>d;
if((a+b)-c==d){flag=true; }
else if((a+b)*c==d){flag=true; }
else if((a-b)+c==d){flag=true; }
else if((a-b)*c==d){flag=true; }
else if((a*b)+c==d){flag=true; }
else if((a*b)-c==d){flag=true; }
else{flag=false;}
if(flag==true){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}