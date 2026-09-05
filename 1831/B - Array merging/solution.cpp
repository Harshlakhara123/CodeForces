#include <bits/stdc++.h>
using namespace std;
 
unordered_map<int,int>help(int n){
    int count = 0;
    int curr = -1;
    unordered_map<int,int>m1;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        if(curr == -1){
            count++;
            curr = a;
        }
        else if(curr == a){
            count++;
        }
        else{
            m1[curr] = max(m1[curr], count);
            curr = a;
            count = 1;
        }
    }
    if (curr != -1) {
        m1[curr] = max(m1[curr], count);
    }
    return m1;
}
void solve(){
    int n;
    cin>>n;
    unordered_map<int,int>m1 = help(n);
    unordered_map<int,int>m2 = help(n);
    int ans = INT_MIN;
    for(auto [k,f]: m1){
        if(m2.find(k) == m2.end()){
            ans = max(ans , f);
        }
        else{
            ans = max(ans , f + m2[k]);
        }
    }
    for(auto [k,f]: m2){
        ans = max(ans , f);
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