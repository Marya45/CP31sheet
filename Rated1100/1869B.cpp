#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k,a,b;
    cin>>n>>k>>a>>b;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first>>arr[i].second;
    }
    int ans = abs(arr[a-1].first-arr[b-1].first) + abs(arr[a-1].second-arr[b-1].second);
    if(a>k && b>k){
        // both are non major cities
        int c1 = LLONG_MAX/2 , c2 = LLONG_MAX/2;
        for(int i=0;i<k;i++){
            c1 = min(c1,abs(arr[i].first-arr[a-1].first) + abs(arr[i].second-arr[a-1].second));
            c2 = min(c2,abs(arr[i].first-arr[b-1].first) + abs(arr[i].second-arr[b-1].second));
        }
        ans = min(ans,c1+c2);
    }
    else if(a<=k && b>k){
        // one is major
        for(int i=0;i<k;i++){
            ans = min(ans,abs(arr[i].first-arr[b-1].first) + abs(arr[i].second-arr[b-1].second));
        }
    }
    else if(a>k && b<=k){
        // one is major
        for(int i=0;i<k;i++){
            ans = min(ans,abs(arr[i].first-arr[a-1].first) + abs(arr[i].second-arr[a-1].second));
        }
    }
    else{
        // both are major
        ans = 0;
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