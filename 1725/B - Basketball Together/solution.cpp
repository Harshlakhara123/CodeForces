#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    long long d;
    cin>>n>>d;
    vector<int>nums;
    for(int i = 0 ; i < n ; i++){
        int a;
        cin>>a;
        nums.push_back(a);
    }
    sort(nums.begin() , nums.end());
    int right = n-1;
    int left = 0;
    int ans = 0;
    long long sum = 0;
    while(left <= right){
        long long needed = d/nums[right] + 1;
        if(right - left + 1 >= needed){
            ans++;
            left += (needed-1);
            right--;
        }
        else break;
    }
    cout<<ans<<'
';
}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	solve();
	
}