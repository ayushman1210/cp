#include<bits/stdc++.h>
using namespace std;
int main(){
double a;
double b; double c;
float output=(a*b)/c;
int x=output;

if(output>INT_MAX || output<INT_MIN){
    cout<<"long long";
}
else if((x-output)==0){
    cout<<"int";
}
else{
    cout<<"double"<<output;
}
}