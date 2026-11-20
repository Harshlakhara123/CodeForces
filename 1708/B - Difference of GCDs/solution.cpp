#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    long long l,r;
    cin>>n>>l>>r;
    vector<long long>ans;
    for(int i = 1 ; i <= n ; i++){
        long long x = ((l+i-1)/i)*i;
        if(x>r){
            cout<<"NO"<<endl;
            return;
        }
        ans.push_back(x);
    }
    cout<<"YES"<<endl;
    for(long long x: ans){
        cout<<x<<" ";
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