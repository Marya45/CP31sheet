#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(m,vector<int>(n)); //storing a rotated matrix
    for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<m;i++){
        sort(arr[i].begin(),arr[i].end());
    }

    int ans = 0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans -= (arr[i][j]*(n-j-1));
            ans += (arr[i][j]*j);
        }
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