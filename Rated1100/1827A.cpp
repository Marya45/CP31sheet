#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MOD = 1e9+7;

void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    int res = 1;

    for(int i=0;i<n;i++){
        int cnt = n - (upper_bound(a.begin(),a.end(),b[i]) - a.begin());
        res = res*(max(0ll,cnt-i))%MOD;
    }

    cout<<res<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}