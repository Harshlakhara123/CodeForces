#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
 
    vector<int> a(n);
 
    for (int &x : a) cin >> x;
 
    int len = n - k + 1;
    int bad = 0;
 
    for (int i = 1; i < len; i++) {
        if (a[i] != a[i - 1])
            bad++;
    }
 
    int ans = (bad == 0);
 
    for (int i = 1; i < k; i++) {
        if (a[i] != a[i - 1])
            bad--;
 
        int right = i + len - 1;
 
        if (a[right] != a[right - 1])
            bad++;
 
        if (bad == 0)
            ans++;
    }
 
    cout << ans << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while (t--) {
        solve();
    }
}