#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll n;
    cin>>n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i){
            arr[i] += arr[i-1];
        }
    }
    ll ans = 0;
    for(int k=1;k<=n;k++){
        if(n%k==0){
            ll mn = LLONG_MAX;
            ll mx = LLONG_MIN;
            for(int i=k-1;i<n;i+=k){
                ll sum = arr[i] - (i-k >=0 ? arr[i-k] : 0);
                mn = min(sum,mn);
                mx = max(sum,mx);
                ans = max(ans,mx-mn);
            }
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}