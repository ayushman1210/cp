#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int count=0;
int arr[4];
while(t--){
for(int i=0; i<4; i++){
    cin>>arr[i];
}
int first=arr[0];
for(int i=0; i<4; i++){
    if(first>=arr[i]){}
    else{
        count++;
    }
}
cout<<count<<endl;
count=count*0;
}
}