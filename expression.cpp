#include<bits/stdc++.h>
using namespace std;
int main(){

int a,b,c;
int max=0;
    cin>>a>>b>>c;
    if((a+b)*c>max){
        max=(a+b)*c;
    }
    if(a+b+c>max){
        max=a+b+c;
    }
    if(a*(b+c)>max){
        max=a*(b+c);
    }
    if(a*b*c>max){
        max=(a*b)*c;
    }
    cout<<max;
}