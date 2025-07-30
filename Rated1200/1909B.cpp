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
    int curr = 2;
    while(true){
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]%curr);
        }
        if(st.size()==2){
            cout<<curr<<"\n";
            return;
        }
        curr*=2;
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