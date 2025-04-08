#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
int b;
cin>>a>>b;
int ld=0;
bool flag=false;
for(int i=a; i<=b; i++){
    int k=i;
    while(k>0){
        ld=k%10;
        k=k/10;
        if(ld==4 || ld==7){flag=true;}
        else{flag=false;}
    }
    if(flag=true){cout<<i<<" ";}
    else{continue;}

}
}