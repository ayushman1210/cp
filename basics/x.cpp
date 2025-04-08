#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    
    // Compute the overlap
    long long start = max(l1, l2);
    long long end = min(r1, r2);
    
    // If the intervals overlap
    if (start <= end) {
        cout << start << ' ' << end;
    } else {
        // No overlap
        cout << -1;
    }
}
