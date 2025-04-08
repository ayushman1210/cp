#include<bits/stdc++.h>
using namespace std;
int main(){
int evn=0;
int odd=0;
int pos=0;
int neg=0;
int n; cin>>n;
int x;
for(int i=1; i<=n; i++){
    cin>>x;
    if(x%2==0){
        evn++;
        if(x>0){pos++;}
        else if(x<0){neg++;}
    }
    else{
        odd++;
        if(x>0){pos++;}
        else if (x<0){neg++;}
    }
}
cout<<"Even: "<<evn<<endl
<<"Odd: "<<odd<<endl
<<"Positive: "<<pos<<endl
<<"Negative: "<<neg<<endl;
}