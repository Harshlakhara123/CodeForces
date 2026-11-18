#include <bits/stdc++.h>
using namespace std;
 
 
const long long mod = 1e9 + 7;
const long long inv6 = 166666668;
void solve(){
    long long n;
    cin >> n;
 
    long long ans = n % mod;
    ans = (ans * ((n + 1) % mod)) % mod;
    ans = (ans * ((4 * n - 1) % mod)) % mod;
    ans = (ans * inv6) % mod;
    ans = (ans * 2022) % mod;
 
    cout << ans << '
';
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}