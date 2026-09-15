#include <bits/stdc++.h>
using namespace std;
unordered_set<char>st;
 
void solve(){
    int n,k;
    cin>>n>>k;
    long long sum = 0;
    vector<long long>a;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        sum += num;
        a.push_back(sum);
    }
    int mx = -1;
    vector<long long>b;
    for(int i = 0 ; i < n ; i++){
        int num;
        cin>>num;
        mx = max(mx,num);
        b.push_back(mx);
    }
    long long ans = INT_MIN;
    for(int i = 0 ; i < min(n,k) ; i++){
        ans = max(ans , a[i] + b[i] * (k - (i+1)));
    }
    cout<<ans<<'
';
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}