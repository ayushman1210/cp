// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// string s;
// string r;
// cin>>s;
// cin>>r;
// int sum=0;
// int sum1=0;
// int mimu=min(s.size(),r.size());
// for(int i=0; i<mimu; i++){
//     sum+=s[i];
//     sum1+=r[i];
//     if(sum1>sum){cout<<s;break;}
// else if(sum>sum1){cout<<r; break;}
// else if(sum==sum1){cout<<s; break;}
// else{continue;}
// }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, r;
    cin >> s >> r;
    
    if (s < r) {
        cout << s << endl; 
    } else {
        cout << r << endl; 
    }

    return 0;
}
