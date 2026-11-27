#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    long long k = 1;
    for(int i = 1 ; i <= 60 ; i++){
        unordered_set<long long>rem;
        k *= 2;
        for(long long x : a){
            rem.insert(x%k);
            if(rem.size() > 2){
                break;
            }
        }
        if(rem.size() == 2){
            cout<<k<<endl;
            return;
        }
    }
    
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}