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
    sort(arr.begin(),arr.end());
    if(arr[0]!=1){
        cout<<"NO\n";
        return;
    }
    int sum = arr[0];
    for(int i=1;i<n;i++){
        if(sum < arr[i]){
            cout<<"NO\n";
            return;
        }
        sum += arr[i];
    }
    cout<<"YES\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}