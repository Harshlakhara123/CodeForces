#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int black = 0;
    int ans = k;
    int i = 0;
    int j = 0;
    while(j < n){
        if(s[j] == 'B')black++;
        if(j-i+1 > k){
            if(s[i] == 'B')black--;
            i++;
        }
        if(j-i+1 == k){
            ans = min(ans , k - black);
        }
        j++;
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