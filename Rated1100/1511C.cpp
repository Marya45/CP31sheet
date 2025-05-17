#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(51,INT_MAX);
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[x] = min(arr[x],i);
    }
    while(q--){
        int x;
        cin>>x;
        cout<<arr[x]<<" ";
        for(int i=1;i<=50;i++){
            if(arr[i] < arr[x]){
                arr[i]++;
            }
        }
        arr[x] = 1;
    }
}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}