#include<bits/stdc++.h>
using namespace std;
int main (){
    int x;
    int y;
    cin>>x>>y;
    if(x%y==0 || y%x==0){
        cout<<"multiples";
    }
    else{
        cout<<"No Multiples";
    }
}