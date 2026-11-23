#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int i = 0, j = n - 1;
    long long leftSum = 0, rightSum = 0;
    int ans = 0;
 
    while (i <= j) {
        if (leftSum <= rightSum) {
            leftSum += a[i];
            i++;
        } else {
            rightSum += a[j];
            j--;
        }
 
        if (leftSum == rightSum) {
            ans = max(ans, i + (n - 1 - j));
        }
    }
 
    cout << ans << '
';
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}