#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    long long k;
    cin>>n>>k;
    vector<vector<int>>a(n,vector<int>(n));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>a[i][j];
        }
    }
    long long count = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(a[i][j] != a[n-1-i][n-1-j])count++;
        }
    }
    count /= 2;
    if(count>k){
        cout<<"NO"<<endl;
    }
    else if(n%2 ==1 || (k-count)%2 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}