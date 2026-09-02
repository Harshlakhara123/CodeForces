#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    long long p;
    cin>>n>>p;
    vector<pair<long long,long long>>nums(n,{-1,-1});
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i].second;
    }
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i].first;
    }
    sort(nums.begin(),nums.end());
    long long ans = p;
    long long rem = n-1;
    for(int i = 0 ; i < n && rem > 0 ; i++){
        if(nums[i].first >= p){
            break;
        }
        int take = min(rem,nums[i].second);
        ans += nums[i].first * take;
        rem -= take;
    }
    ans += rem * p;
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