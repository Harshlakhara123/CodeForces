#include <bits/stdc++.h>
using namespace std;
 
 
void solve(){
    int n;
    cin>>n;
    int negs = 0;
    long long sum = 0;
    long long mn = LLONG_MAX;
    long long k;
    for(int i = 0 ; i < n ; i++){
        cin>>k;
        sum += abs(k);
        mn = min(mn,abs(k));
        if(k < 0)negs++;
    }
    if(negs%2 ==0){
        cout<<sum<<endl;
    }
    else{
        sum -= (2*mn);
        cout<<sum<<endl;
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