#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    int el = n;
    long long sumSecond = 0;
    int mnFirst = INT_MAX;
    int mnSecond = INT_MAX;
    while(el--){
        int m;
        cin >> m;
        int first = INT_MAX;
        int second = INT_MAX;
       for(int i = 0 ; i < m ; i++){
           int a;
           cin>>a;
           if(a < first){
               second = first;
               first = a;
           }
           else if(a < second){
               second = a;
           }
       }
       sumSecond += second;
       mnSecond = min(mnSecond,second);
       mnFirst = min(mnFirst,first);
    }
    long long ans = sumSecond - mnSecond + mnFirst;
    cout<<ans<<'
';
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
 
}