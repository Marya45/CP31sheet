#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> suff(n);
    suff[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suff[i] = suff[i+1] + arr[i];
    }
    int ans = 0;
    int l = 0;
    for(int i=0;i<n-1;i++){
        l+=arr[i];
        int r = suff[i+1];
        ans = max(ans,__gcd(l,r));
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