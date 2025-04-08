#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    vector<long long> arr(t);
    long long sum = 0;
    for(int i = 0; i < t; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < t; i++) {
        sum += arr[i];
    }
    cout << abs(sum) << endl;
}
