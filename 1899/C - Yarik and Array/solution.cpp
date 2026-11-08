#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int sum = a[0];
    int ans = a[0];
    for(int i = 1 ; i < n ; i++){
        if((abs(a[i]) % 2) != (abs(a[i-1]) % 2) && sum > 0){
            sum += a[i];
        }
        else{
            sum = a[i];
        }
        ans = max(ans,sum);
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