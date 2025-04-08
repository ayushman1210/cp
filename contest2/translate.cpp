#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
string r;
cin>>s;
cin>>r;
reverse(s.begin(),s.end());
cout<<(s== r ? "YES" : "NO")<<endl;
}