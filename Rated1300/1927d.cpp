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
    vector<int> prev_diff(n,-1);
    int prev = -1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            prev = i-1;
        }
        prev_diff[i] = prev;
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(prev_diff[r-1] >= l-1){
            cout<<r<<" "<<prev_diff[r-1]+1<<"\n";
        }
        else{
            cout<<"-1 -1\n";
        }

    }
    cout<<"\n";
}

signed main(){
    fastio();
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
}