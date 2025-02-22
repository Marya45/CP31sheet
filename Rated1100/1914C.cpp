#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll ans = 0;
    ll max_b = 0;
    ll a_sum = 0;
    for(int i=0;i<min(n,k);i++){
        a_sum += a[i];
        max_b = max(max_b,b[i]);
        ll tmp = a_sum + ((k-i-1)*max_b);
        ans  = max(ans,tmp);
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