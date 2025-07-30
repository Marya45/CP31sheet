#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    vector<pair<int,int>> ans;
    int val1 = 1 , val2 = -1;
    for(int i=2;i<=n;i++){
        if(arr[i]!=arr[1]){
            ans.push_back({1,i});
            val2 = i;
        }
    }
    if(val2==-1){
        cout<<"NO\n";
        return;
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==arr[1]){
            ans.push_back({val2,i});
        }
    }
    cout<<"YES\n";
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<"\n";
    }
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}