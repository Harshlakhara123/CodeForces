#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>a(51,-1);
    int x;
    for(int i = 1 ; i <= n ; i++){
        cin>>x;
        if(a[x] != -1)continue;
        a[x] = i;
    }
    int t;
    for(int i = 1 ; i <= q ; i++){
        cin>>t;
        cout<<a[t]<<" ";
        for(int j = 1 ; j <= 50 ; j++){
            if(a[j] != -1 && a[j] < a[t])a[j]++;
        }
        a[t] = 1;
    }
    cout<<endl;
}
int main() {
	// your code goes here
	solve();
}