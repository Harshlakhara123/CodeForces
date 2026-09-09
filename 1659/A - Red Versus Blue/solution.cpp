#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    int eq = r/(b+1);
    int rm = r%(b+1);
    string s = "";
    while(b--){
        if(rm){
            s += 'R';
            r--;
            rm--;
        }
        int k = eq;
        while(k--){
            s += 'R';
            r--;
        }
        s += 'B';
    }
    while(r--){
        s += 'R';
    }
    cout<<s<<'
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