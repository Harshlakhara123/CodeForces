#include <bits/stdc++.h>
using namespace std;
struct customCompare{
    bool operator()(const pair<int,int>&a , const pair<int,int>&b)const{
        if(a.first == b.first){
            return a.second > b.second;
        }
        return a.first < b.first;
    }
};
 
void solve(){
    int n,k;
    cin>>n>>k;
    priority_queue<pair<int, int>, vector<pair<int, int>>, customCompare> pq;
    for(int i = 1 ; i <= n ; i++){
        int a;
        cin>>a;
        a = a%k;
        if(a==0)a = k;
        pq.push({a , i});
    }
    while(!pq.empty()){
        auto [h,i] = pq.top();
        pq.pop();
        if(h - k <= 0){
            cout<<i<<" ";
        }
        else {
            pq.push({h-k , i});
        }
    }
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	    cout<<'
';
	}
 
}