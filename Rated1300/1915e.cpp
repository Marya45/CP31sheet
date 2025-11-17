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
    map<int,int> mp;
    mp[0]++;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sum -= arr[i];
        }
        else{
            sum += arr[i];
        }

        if(mp[sum]){
            cout<<"YES\n";
            return;
        }
        mp[sum]++;
    }
    cout<<"NO\n";
}

signed main(){
    fastio();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}