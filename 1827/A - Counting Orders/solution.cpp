#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    long long mod = 1e9+7;
    vector<long long>a(n);
    vector<long long>b(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    long long ans = 1;
    for(int i = 0 ; i < n ; i++){
        long long k = b[i];
        long long count = a.end() - upper_bound(a.begin(), a.end(), k);
        long long choices = max(0LL, count - i);
        ans = (ans * choices) % mod;
    }
    
    cout<<ans<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}