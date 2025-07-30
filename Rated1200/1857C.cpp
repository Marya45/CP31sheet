#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    int s = n*(n-1)/2;
    vector<int> arr(s);
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<s;i+=--n){
        cout<<arr[i]<<" ";
    }
    cout<<"1000000000\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}