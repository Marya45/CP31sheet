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
    multiset<int> mt;
    for(int i=0;i<n;i++){
        if(mt.find(arr[i]-1)!=mt.end()){
            mt.erase(mt.find(arr[i]-1));
        }
        mt.insert(arr[i]);
    }
    cout<<mt.size()<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}