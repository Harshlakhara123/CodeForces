#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    vector<long long>a(n);
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
        sum += a[i];
    }
    long long prefix = 0;
    long long ans = 0;
    for(int i = 0 ; i < n-1 ; i++){
        prefix += a[i];
        ans = max(ans,gcd(prefix,sum));
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}