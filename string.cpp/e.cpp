
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int sum = 0;
    for (int i=0; i<s.size(); i++) {
        char c =s[i];
        sum+=c-'0';
    }

    cout << sum;
}
