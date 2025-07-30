#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    // aj-ai = j-i
    // aj-j = ai-i
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]-i]++;
    }
    int ans = 0;
    for(auto it:mp){
        ans += (it.second*(it.second-1)/2);
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