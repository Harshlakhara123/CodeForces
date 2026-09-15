#include <bits/stdc++.h>
using namespace std;
unordered_set<char>st;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    st.clear();
    int ans = 0;
    for(int i = 0 ; i < s.size() ; i++){
        st.insert(s[i]);
        ans += (st.size());
    }
    cout<<ans<<'
';
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}