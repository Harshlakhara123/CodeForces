#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll mergeSort(vector<ll>& a, int l, int r) {
    if (r - l <= 1) return 0;
 
    int mid = (l + r) / 2;
 
    ll inv = mergeSort(a, l, mid);
    inv += mergeSort(a, mid, r);
 
    vector<ll> temp;
    int i = l, j = mid;
 
    while (i < mid && j < r) {
        if (a[i] <= a[j]) {
            temp.push_back(a[i++]);
        } else {
            inv += mid - i;
            temp.push_back(a[j++]);
        }
    }
 
    while (i < mid) temp.push_back(a[i++]);
    while (j < r) temp.push_back(a[j++]);
 
    for (int k = l; k < r; k++) {
        a[k] = temp[k - l];
    }
 
    return inv;
}
 
void solve() {
    int n;
    cin >> n;
 
    vector<ll> pre(n);
    ll sum = 0;
    bool possible = true;
 
    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
 
        sum += x;
        pre[i] = sum;
 
        if (sum < 0) possible = false;
    }
 
    if (!possible) {
        cout << -1 << '
';
        return;
    }
 
    cout << mergeSort(pre, 0, n) << '
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