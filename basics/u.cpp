#include<bits/stdc++.h>
using namespace std;
int main(){
double t;
cin>>t;
int x=t;
if((t-x)>0){
    cout<<"float"<<" "<<x<<" "<<t-x;
}
else{
    cout<<"int"<<" "<<x;
}
}