#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int firstG = -1;
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == 'g'){
            firstG = i;
            break;
        }
    }
    int lastG = -1;
    for(int i = n-1 ; i >= 0 ; i--){
        if(s[i] == 'g')lastG = i;
        else if(s[i] == c){
            if(lastG == -1){
                ans = max(ans , (n+firstG-i));
            }
            else{
                ans = max(ans , lastG-i);
            }
        }
    }
    cout<<ans<<'
';
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}