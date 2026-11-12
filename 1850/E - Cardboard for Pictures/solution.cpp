#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    long long c;
    cin>>n>>c;
    vector<long long>size(n);
    for(int i = 0 ; i < n ; i++){
        cin>>size[i];
    }
    long long low = 1;
    long long high = 1e9;
    long long ans;
    while(low <= high){
        long long mid = low + (high-low)/2;
        long long total = 0;
        for(auto& s: size){
            long long side = (s + 2 * mid);
            total += (side*side);
            if(total > c)break;
        }
        if(total == c){
            cout<<mid<<endl;
            return;
        }
        else if(total < c)low = mid + 1;
        else high = mid - 1;
    }
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}