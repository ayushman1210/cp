#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
if(a<=b && b<=c){
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
else if(a<=c && c<=b){
    cout<<a<<endl<<c<<endl<<b<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
else if(b<=c && c<=a){
    cout<<b<<endl<<c<<endl<<a<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
else if(b<=a && a<=c){
    cout<<b<<endl<<a<<endl<<c<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
else if(c<=b && b<=a){
    cout<<c<<endl<<b<<endl<<a<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
else if(c<=a && a<=b){
    cout<<c<<endl<<a<<endl<<b<<endl;
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c;
}
}