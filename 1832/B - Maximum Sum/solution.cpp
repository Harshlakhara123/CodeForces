#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<long long>pre(n+1,0);
    for(int i = 0 ; i < n ; i++){
        pre[i+1] = pre[i] + a[i];
    }
    long long ans = 0;
    for(int i = 0 ; i <= k ; i++){
        int left = 2*i;
        int right = k-i;
        long long currSum = pre[n-right] - pre[left];
        ans = max(ans,currSum);
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