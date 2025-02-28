#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int arr[t];
int count=0;
int max=-1;
for(int i=0; i<t; i++){
    cin>>arr[i];
   
    if(arr[i]>max){
        max=arr[i];
    }
}

for(int i=0; i<t; i++){
    
    if(t==1){count=count*0; break;}
        if(arr[i]<max){
            arr[i]+=1;
            count++;
            i--;
        }
        else{
            continue;
        }
}
cout<<count;
}