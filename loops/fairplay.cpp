#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int s1,s2,s3,s4;
while(t--){
    cin>>s1>>s2>>s3>>s4;
    int max1=max(s1,s2);
    int max2=max(s3,s4);
    int min1=min(s1,s2);
    int min2=min(s3,s4);
    if(max1>=min2 && max2>=min1){
        cout<<"Yes"<<endl;
    }
    else{cout<<"No"<<endl;}
}
}