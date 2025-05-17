#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> arr(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != arr[n-i-1][n-j-1]){
                cnt++;
            }
        }
    }

    cnt/=2;

    if(cnt > k){
        cout<<"NO\n";
    }
    else{
        int rem = k-cnt;
        if(n%2==1 || rem%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
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