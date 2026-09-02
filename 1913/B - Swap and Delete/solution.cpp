#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int zeroes = 0;
    int ones = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '0')zeroes++;
        else ones++;
    }
    for (int i = 0; i < s.size(); i++) {
        if ((s[i] == '0' && ones == 0) || (s[i] == '1' && zeroes == 0)) {
            cout << s.size() - i << "
";
            return;
        }
        if (s[i] == '1') zeroes--;
        if (s[i] == '0') ones--;
    }
    
    cout << 0 << "
";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}