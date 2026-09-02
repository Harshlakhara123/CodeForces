#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<long long>prefix;
    prefix.push_back(0);
    long long curr = 0;
    for(int i = 1 ; i <= n ; i++){
        long long a;
        cin>>a;
        curr+=a;
        prefix.push_back(curr);
    }
    for(int i = 0 ; i < q ; i++){
        long long l,r,k;
        cin>>l>>r>>k;
        long long sum = prefix[l-1] + (r-l+1) * k + prefix[n] - prefix[r];
        if(sum%2 == 1){
            cout<<"YES"<<'
';
        }
        else cout<<"NO"<<'
';
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}