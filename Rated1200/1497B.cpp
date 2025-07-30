#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> freq(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]%m]++;
    }
    int ans = 0;
    for(int i=0;i<m;i++){
        int x = freq[i];
        int y = freq[(m-i)%m];
        if(x==0 && y==0){
            continue;
        }
        int tmp = min(x,y);
        x -= min(tmp+1,x);
        y -= min(tmp+1,y);
        // abs(c1-c0)<=1
        ans++;
        ans += (x+y);
        freq[i]=0;
        freq[(m-i)%m]=0;
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