#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
int count=0;
vector<int>v;
for(int i=0; i<t; i++){
int q;
cin>>q;
v.push_back(q);
}
for(int i=t-2; i>=0; i--){
    for(int j=i+1; j>=0; j--){
        if(v[i]<v[j]){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
            count+=1;
        }
        else{
            continue;
        }
    }

}
for(int i=0; i<t; i++){
    cout<<v[i];
}
}