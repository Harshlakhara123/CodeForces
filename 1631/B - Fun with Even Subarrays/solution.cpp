#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int ans = 0;
    int i = n-2;
    int last = a[n-1];
    while(i >= 0){
        if(a[i] == last){
            i--;
        }
        else{
            ans++;
            i -= (n-i-1);
        }
    }
    cout<<ans<<endl;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}