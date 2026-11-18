#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>lastSeen(1001,-1);
    for(int i = 1 ; i <= n ; i++){
        int x;
        cin>>x;
        lastSeen[x] = i;
    }
    int ans = -1;
    for(int i = 1 ; i <= 1000 ; i++){
        if(lastSeen[i] == -1)continue;
        for(int j = i ; j <= 1000 ; j++){
            if(lastSeen[j] == -1)continue;
            if(gcd(i,j) == 1)ans = max(ans , lastSeen[i] + lastSeen[j]);
        }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}