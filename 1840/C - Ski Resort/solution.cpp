#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    long long ans = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        if(a <= q)count++;
        else{
            if(count >= k){
                long long p = count - k + 1;
                ans += (p * (p+1))/2;
            }
            count = 0;
        }
    }
    if(count >= k){
        long long p = count - k + 1;
        ans += (p * (p+1))/2;
    }
    cout<<ans<<'
';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
 
}