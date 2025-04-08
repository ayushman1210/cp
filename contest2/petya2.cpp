#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, r;
    getline(cin, s);
    getline(cin, r);

    for (int i = 0; i < s.size(); i++) {
        if(int(s[i])<97)s[i] += 32;
        if(int(r[i])<97)r[i] += 32;
        if (s[i] < r[i]) {
            cout << -1;
            return 0;
        } else if (s[i] > r[i]) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
}