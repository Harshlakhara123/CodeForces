#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int a = 1;
    for(int i = 2 ; i*i <= n ; i++){
        if(n%i == 0){
            a = n/i;
            break;
        }
    }
    cout<<a<<" "<<n-a<<'
';
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
 
}