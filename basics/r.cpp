#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
int year=num/365;
int month=(num-(365*year))/30;
int days=((num-(365*year))-30*month);
cout<<year<<" "<<"years"<<endl;
cout<<month<<" "<<"months"<<endl;
cout<<days<<" "<<"days"<<endl;
}
