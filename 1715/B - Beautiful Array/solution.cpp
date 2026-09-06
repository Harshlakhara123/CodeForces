#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    long long k,b,s;
    cin>>n>>k>>b>>s;
    if (k != 0 && b > s / k) {
        cout << -1 << '
';
        return;
    }
    long long mn = k * b;
    long long rem = s - mn;
    if (rem > (__int128)n * (k - 1)) {
        cout << -1 << '
';
        return;
    }
    vector<long long>nums(n,0);
    nums[0] = mn;
    
    for(int i = 0 ; i < n ; i++){
        if(rem == 0)break;
        
        long long add = min(rem,k-1);
        rem -= add;
        nums[i] += add;
    }
   
    for(int i = 0 ; i < n ; i++){
        cout<<nums[i] << " ";
    }
    cout<<'
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