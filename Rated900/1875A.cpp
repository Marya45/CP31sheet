#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll a,b,n;
    cin>>a>>b>>n;
    vector<ll> arr(n);
    ll ans = b;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        ans += min(a-1,arr[i]);
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