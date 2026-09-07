#include <bits/stdc++.h>
using namespace std;
 
void solve(){
   int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    vector<int> ans(n);
    for(int i = 0 ; i < n ; ){
        int j = i;
        
        while(j < n && a[j] == a[i]){
            j++;
        }
        
        if(j - i == 1){
            cout << -1 << '
';
            return;
        }
        
        for(int k = i ; k < j - 1 ; k++){
            ans[k] = k + 2; 
        }
        ans[j - 1] = i + 1; 
        
        i = j;
    }
    for(int i = 0 ; i < n ; i++){
        cout << ans[i] << " ";
    }
    cout << '
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