#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
vector<int> pairs[1001];

void solve(){
    int n;
    cin>>n;
    vector<int> arr[1001];
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[x].push_back(i);
    }

    int ans = -1;

    for(int i=1;i<1001;i++){
        for(auto j:pairs[i]){
            if(!arr[i].empty() && !arr[j].empty()){ 
                ans = max(ans,arr[i].back()+arr[j].back());
            }
        }
    }
    cout<<ans<<"\n";
}

signed main(){
    fastio();
    for(int i=1;i<1001;i++){
        for(int j=1;j<1001;j++){
            if(__gcd(i,j)==1){
                pairs[i].push_back(j);
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}