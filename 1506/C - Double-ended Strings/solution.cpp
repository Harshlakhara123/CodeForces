#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    string a,b;
    cin>>a;
    cin>>b;
    int mx = 0;
    for(int len = 1 ; len <= a.size() ; len++){
        for(int i = 0 ; i + len <= a.size() ; i++){
            string sub = a.substr(i,len);
            if(b.find(sub) != string::npos){
                mx = max(mx,len);
            }
        }
    }
    cout << a.size() + b.size() - 2 * mx << '
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