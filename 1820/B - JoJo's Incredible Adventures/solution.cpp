#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    string s;
    cin>>s;
    int n = s.size();
    int ans = 0;
    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '1'){
            count++;
            ans = max(ans,count);
        }
        else count = 0;
    }
    if (ans == n) {
        cout << 1LL*n * n << "
";
        return;
    }
    int diff = 0;
    for(char c: s){
        if(c != '1')break;
        else diff++;
    }
    for(int i = n-1 ; i >= 0 ; i--){
        if(s[i] != '1')break;
        else diff++;
    }
    ans = max(ans,diff);
    long long result = 0;
    for (long long i = 1; i <= ans; i++) {
        result = max(result, i * (ans - i + 1));
    }
    cout<<result<<endl;
}
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}