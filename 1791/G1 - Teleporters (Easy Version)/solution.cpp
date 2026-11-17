#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    long long c;
    cin>>n>>c;
    vector<long long>a(n);
    for(int i = 0 ; i < n ; i++){
        long long k;
        cin>>k;
        a[i] = k + i + 1;
    }
    sort(a.begin(),a.end());
    long long sum = 0;
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if(sum > c){
            cout<<i<<endl;
            return;
        }
    }
    cout<<n<<endl;
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