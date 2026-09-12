#include <bits/stdc++.h>
using namespace std;
 
int get_xor(int n) {
    int rem = n % 4;
    if (rem == 0) return n;
    if (rem == 1) return 1;
    if (rem == 2) return n + 1;
    return 0;
}
void solve(){
    int a,b;
    cin >> a >> b;
    int x = get_xor(a-1);
    if(x == b){
        cout<<a<<'
';
    }
    else if((x^b) == a){
        cout<<a+2<<'
';
    }
    else cout<<a+1<<'
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