#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(char c: s){
        m[c]++;
    }
    int ans = 0;
    unordered_set<char>st;
    for(int i = 0 ; i < n-1 ; i++){
        st.insert(s[i]);
        m[s[i]]--;
        if(m[s[i]] == 0)m.erase(s[i]);
        int k = st.size() + m.size();
        ans = max(ans , k);
    }
    cout<<ans<<'
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