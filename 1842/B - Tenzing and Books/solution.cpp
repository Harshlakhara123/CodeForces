#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,x;
    cin>>n>>x;
    int curr = 0;
    for(int i = 0 ; i < 3 ; i++){
        vector<int>a(n);
        for(int j = 0 ; j < n ; j++){
            cin>>a[j];
        }
        for(int d: a){
            if((d|x)!=x)break;
            curr |= d;
        }
    }
    if(curr == x)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}