#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    long long a , b;
    cin>>a>>b;
    
    long long ans = INT_MAX;
    
    for(int add = 0 ; add < 32 ; add++){
        long long op = add;
        long long A = a;
        long long B = b + add;
        if(B == 1)continue;
        while(A > 0){
            A /= B;
            op++;
        }
        ans = min(ans , op);
    }
    cout<<ans<<'
';
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