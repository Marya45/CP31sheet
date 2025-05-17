#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    for(auto it:mp){
        if(mp.find(it.first+k)!=mp.end()){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}