#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> diff;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]>x){
            diff.push_back(arr[i]-arr[i-1]);
        }
    }
    sort(diff.begin(),diff.end());
    int ans = diff.size()+1;
    for(auto d:diff){
        int val = ((d+x-1)/x)-1;
        if(val<=k){
            k-=val;
            ans--;
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}