#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0;
    int mn = 2;
    int i = n-2;
    while(i>=0){
        while(i>=0 && arr[i]==arr[n-1]){
            i--;
        }
        if(i>=0){
            i -= (n-i-1);
            ans++;
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