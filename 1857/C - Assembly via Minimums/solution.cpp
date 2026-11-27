#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int size = n*(n-1)/2;
    vector<int>b(size);
    for(int &x: b){
        cin>>x;
    }
    sort(b.begin(),b.end());
    
    int ind = 0;
    for(int cutoff = n-1; cutoff > 0 ; cutoff--){
        cout<<b[ind]<<" ";
        ind += cutoff;
    }
    cout<<b.back()<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}