#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> arr(n);
    vector<int> pref(n,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        pref[i] = arr[i];
        if(i){
            arr[i] = max(arr[i],arr[i-1]);
            pref[i] += pref[i-1];
        }
    }
    int l;
    for(int i=0;i<q;i++){
        cin>>l;
        auto it = upper_bound(arr.begin(),arr.end(),l);
        if(it==arr.end()){
            cout<<pref[n-1]<<" ";
        }
        else if(it==arr.begin()){
            cout<<"0 ";
        }
        else{
            cout<< pref[it-arr.begin()-1]<<" ";
        }
    }
    cout<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}