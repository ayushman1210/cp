#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    for(int i=2; i<t; i++){
        if(t==2){cout<<2;}
        if(t%i==0){break;}
        else{cout<<t;}
    }
}

}