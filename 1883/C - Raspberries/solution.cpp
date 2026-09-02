#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n , k;
    cin>>n>>k;
    int ans = INT_MAX;
    int evens = 0;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        if(a%2 == 0)evens++;
        ans = min(ans ,(k - (a%k))%k);
    }
    if(k == 4){
        cout<<min(ans , max(0,2-evens))<<'
';
        return;
    }
    cout<<ans<<'
';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}