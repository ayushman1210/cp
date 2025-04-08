#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string s;
    cin >> s;
    int freq[26] = {0};

    for (int i = 0; i < t; i++) {
        freq[s[i] - 'a']++;
        cout<<freq[i];
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            cout << char(i + 'a');
        }
    }

    cout << endl;
    return 0;
}
