#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    long long x;
    cin>>n>>x;
    int ans = 0;
    long long start = -1;
    long long end = -1;
    for(int i = 0 ; i < n ; i++){
        long long a;
        cin>>a;
        if(start == -1 && end == -1){
            start = a - x;
            end = a + x;
        } 
        else{
            if(start <= a - x && end >= a + x){
                start = a - x;
                end = a + x;
            }
            else if(end >= a + x){
                end = a + x;
            }
            else if(start <= a - x){
                start = a - x;
            }
            if(end < a - x  || start > a + x){
                ans++;
                start = a - x;
                end = a + x;
            }
        }
    }
    cout<<ans<<'
';
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