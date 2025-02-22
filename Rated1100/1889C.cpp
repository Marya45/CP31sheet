#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<long long> arr(n);
    long long ans = LLONG_MIN , sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans = max(ans,arr[i]);
    }
    if(n==1){
        cout<<arr[0]<<"\n";
        return; 
    }
    int prev = -1;
    for(int i=0;i<n;i++){
        if(prev == abs(arr[i])%2 || sum<0){
            sum = 0;
        }
        sum += arr[i];
        prev = abs(arr[i])%2;
        ans = max(ans,sum);
    }
    cout<<ans<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}