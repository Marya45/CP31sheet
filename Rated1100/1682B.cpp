#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x!=i){
            arr.push_back(x);
        }
    }
    int ans = arr[0];
    for(int i=1;i<arr.size();i++){
        ans &= arr[i];
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