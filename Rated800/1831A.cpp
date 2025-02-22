#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n+1];
    unordered_map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        mp[i] = n+1-i;
    }
    for(int i=1;i<=n;i++){
        cout<<mp[arr[i]]<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}