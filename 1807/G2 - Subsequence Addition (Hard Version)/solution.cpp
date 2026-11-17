#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    long long sum = 1;
    if(1 != a[0]){
        cout<<"NO"<<endl;
        return;
    }
    for(int i = 1 ; i < n ; i++){
        if(sum >= a[i]){
            sum = sum + a[i];
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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