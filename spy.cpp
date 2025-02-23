#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (v[0] != v[1] && v[0] != v[2]) {
            cout << 1 << endl; 
        } else {
            for (int i = 1; i < n; i++) {
                if (v[i] != v[0]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
