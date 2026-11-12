#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<long long,long long>>pos;
    int x,y;
    for(int i = 0 ; i < n ; i++){
        cin>>x>>y;
        pos.push_back({x,y});
    }
    long long mnDistanceofA = (a<=k)?0:LLONG_MAX;
    long long mnDistanceofB = (b<=k)?0:LLONG_MAX;
    if(mnDistanceofA){
        for(int i = 0 ; i < k ; i++){
            mnDistanceofA = min(mnDistanceofA ,(abs(pos[i].first - pos[a-1].first) + abs(pos[i].second - pos[a-1].second)));
        }
    } 
    if(mnDistanceofB){
        for(int i = 0 ; i < k ; i++){
            mnDistanceofB = min(mnDistanceofB , (abs(pos[i].first - pos[b-1].first) + abs(pos[i].second - pos[b-1].second)));
        }
    }
    long long ans = abs(pos[a-1].first - pos[b-1].first) + abs(pos[a-1].second - pos[b-1].second);
    ans = min(ans , mnDistanceofA + mnDistanceofB);
    cout<<ans<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}