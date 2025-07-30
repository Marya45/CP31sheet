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
    int ans = 0;
    vector<int> cnt(32, 0);
    for (int i = 0; i < n; i++) {
        for (int bit = 31; bit >= 0; bit--){
            if ((arr[i] & (1 << bit))){
                cnt[bit]++;
                break;
            }
        }
    }
    for (int bit = 0; bit < 32; bit++) {
        ans += cnt[bit] * (cnt[bit] - 1) / 2;
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