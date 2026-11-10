#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n,q;
    cin>>n>>q;
    
    vector<long long>a(n);
    vector<long long>power(31,1);
    for(int i = 1 ; i < 31 ; i++){
        power[i] = power[i-1] * 2;
    }
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    
    vector<int>query;
    int mn = 31;
    for(int i = 0 ; i < q ; i++){
        int x;
        cin >> x;
        if(x < mn){
            query.push_back(x);
            mn = x;
        }
    }
    for(int p : query){
        long long d = 1LL << p;
        long long add = 1LL << (p-1);
        for(long long &x : a){
            if(x%d == 0)x += add;
        }
    }
    for(long long x: a){
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