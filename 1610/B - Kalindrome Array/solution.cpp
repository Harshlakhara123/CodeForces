#include <bits/stdc++.h>
using namespace std;
 
bool check(vector<int>& a, int i, int j, int ignore){
    while(i < j){
        if(a[i] == a[j]){
            i++;
            j--;
        }
        else if(a[i] == ignore){
            i++;
        }
        else if(a[j] == ignore){
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int i = 0;
    int j = n-1;
    while(i<j && a[i] == a[j]){
        i++;
        j--;
    }
    if(i>=j){
        cout<<"YES"<<endl;
        return;
    }
    if(check(a,i,j,a[i]) || check(a,i,j,a[j])){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}