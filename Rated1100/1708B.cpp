#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> ans(n+1);

    for(int i=1;i<=n;i++){
        int x = r/i *i;
        if(x>=l){
            ans[i] = x;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }cout<<"\n";

}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}