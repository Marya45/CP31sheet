#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> pref(n+1);
    for(int i=1;i<=n;i++){
        pref[i] = pref[i-1]+arr[i-1];
    }
    int ans = 0;

    for(int i=0;i<=k;i++){
        int j = k-i;
        int curr =  pref[n-i] - pref[2*j];
        ans = max(ans,curr);
    }
    cout<<ans<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}