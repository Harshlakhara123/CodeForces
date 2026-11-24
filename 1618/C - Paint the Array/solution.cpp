#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin >> n;
 
    vector<long long> a(n);
    long long ge = 0, go = 0;
 
    for(int i = 0; i < n; i++){
        cin >> a[i];
 
        if(i % 2 == 0)
            ge = gcd(ge, a[i]);
        else
            go = gcd(go, a[i]);
    }
 
    bool even = true, odd = true;
 
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 && a[i] % go == 0)
            odd = false;
 
        if(i % 2 == 1 && a[i] % ge == 0)
            even = false;
    }
 
    if(even) cout << ge << '
';
    else if(odd) cout << go << '
';
    else cout << 0 << '
';
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
 
    while(t--) solve();
}