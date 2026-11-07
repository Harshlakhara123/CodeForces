#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<pair<long long , long long>>nums;
    long long a;
    for(int i = 0 ; i < n ; i++){
        cin>>a;
        nums.push_back({a,i});
    }
    sort(nums.begin() , nums.end());
    vector<long long>pre(n);
    pre[0] = nums[0].first;
    for(int i = 1 ; i < n ; i++){
        pre[i] = pre[i-1] + nums[i].first;
    }
    vector<long long>ans(n);
    for(int i = 0 ; i < n ; i++){
        int j = i;
        int found = i;
        while(j<n){
            pair<long long,long long>temp = {pre[j]+1 , INT_MIN};
            long long idx = lower_bound(nums.begin(), nums.end(), temp) - nums.begin();
            idx--;
            if(idx == j)break;
            found += (idx-j);
            j = idx;
        }
        ans[nums[i].second] = found;
    }
    for(int i = 0 ; i < n ; i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}