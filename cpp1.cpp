#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[5][5];
int t; 
int p;
int count=0;
for(int i=0; i<5; i++){
for(int j=0; j<5; j++){
    cin>>arr[i][j];
    if(arr[i][j]==1){
       t=i;
       p=j;
    }
}
}
while(t!=2 || p!=2){
    if(t<2){t++; count++;}
    if(t>2){t--; count++;}
    else if(p>2){p--; count++;}
    else if(p<2){p++; count++;}
}

    cout<<count;
}
