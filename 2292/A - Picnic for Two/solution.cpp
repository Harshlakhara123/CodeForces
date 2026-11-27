#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int l, a, b;
    cin >> l >> a >> b;
 
    int g1 = gcd(l, a);
    int g2 = gcd(l, b);
 
    cout << l / lcm(g1, g2) << endl;
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}