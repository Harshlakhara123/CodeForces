#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i].first;
        nums[i].second = i + 1;
    }
    sort(nums.rbegin(), nums.rend());
 
    int left = -1;
    int right = 1;
    long long t = 0;
    vector<int> ans(n + 1, 0);
 
    for (int i = 0; i < n; i++) {
        auto p = nums[i];
        int count = p.first;
        int id = p.second;
 
        if (i % 2 == 0) {
            ans[id] = right;
            t += 2LL * count * right;
            right++;
        } else {
            ans[id] = left;
            t += 2LL * count * abs(left);
            left--;
        }
    }
 
    cout << t << '
';
    for (int i = 0; i <= n; i++) {
        cout << ans[i] << (i == n ? '
' : ' ');
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}