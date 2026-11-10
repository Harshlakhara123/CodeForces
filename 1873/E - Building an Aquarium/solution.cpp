#include <bits/stdc++.h>
using namespace std;
 
 
bool possible(const vector<long long>& a, long long h, long long x) {
    long long water_needed = 0;
    for (long long val : a) {
        if (val < h) {
            water_needed += (h - val);
            if (water_needed > x) return false;
        }
    }
    return water_needed <= x;
}
void solve(){
    long long n,x;
    cin>>n>>x;
    
    vector<long long>a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    long long high = 2e9+7;
    long long low = 1;
    long long ans = 1;
    while(low <= high){
        long long mid = low + (high - low) / 2;
        if (possible(a, mid, x)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
    
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}