#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    long long n,x,y;
    cin>>n>>x>>y;
    long long common = n/lcm(x,y);
    long long positive = n/x - common;
    long long negative = n/y - common;
    long long ans = positive*(2*n - positive + 1)/2 - negative*(negative+1)/2;
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