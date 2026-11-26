#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>a(n),b(n),c(n);
    int x;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        a[i] = {x,i+1};
    }
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        b[i] = {x,i+1};
    }
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        c[i] = {x,i+1};
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    int ans = 0;
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(a[i].second == b[j].second)continue;
            for(int k = 0 ; k < 3 ; k++){
                if(b[j].second == c[k].second || a[i].second == c[k].second)continue;
                ans = max(ans , a[i].first+b[j].first+c[k].first);
            }
        }
    }
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