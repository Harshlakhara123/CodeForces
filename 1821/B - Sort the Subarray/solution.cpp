#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }
    int l = 0;
    int ansl = 0;
    int ansr = 0;
    bool found = a[0] != b[0];
    for(int r = 1 ; r < n ; r++){
        if(b[r] >= b[r-1]){
            if(a[r] != b[r])found = true;
        }
        else{
            if(found && (ansr-ansl < (r-l-1))){
                ansr = r-1;
                ansl = l;
            }
            l = r;
            found = a[r] != b[r];
        }
    }
    if(found && (ansr-ansl < (n-1-l))){
        ansr = n-1;
        ansl = l;
    }
    cout<<ansl+1<<" "<<ansr+1<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}