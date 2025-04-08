#include<bits/stdc++.h>
using namespace std;
int main(){
double x;
cin>>x;
int y=x;
if( (x-y)>=0 && x<=50 && x>25){
cout<<"Interval (25,50]";
}
else if(x<=75 && x>0 && x>50){
    cout<<"Interval (50,75]";
}
else if(y<=100 && x>0 && x>75){
    cout<<"Interval (75,100]";
}
else if(y<=25 && x>=0 ){
    cout<<"Interval [0,25]";
}
else{
    cout<<"Out of Intervals";
}
}