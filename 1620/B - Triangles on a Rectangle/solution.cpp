#include <bits/stdc++.h>
using namespace std;
 
int inp(){
    int mx = 0;
    for(int ind = 1 ; ind <= 2 ; ind++){
        int k;
        cin>>k;
        int first , last;
        for(int i = 1 ; i <= k ; i++){
            int a;
            cin>>a;
            if(i == 1)first = a;
            else if(i == k)last = a;
        }
        mx = max(mx,last - first);
    }
    return mx;
}
 
void solve(){
    int w,h;
    cin>>w>>h;
    long long ans = 1LL * inp()* h;
    long long ans2 = 1LL * inp()* w;
    cout<<max(ans,ans2)<<'
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