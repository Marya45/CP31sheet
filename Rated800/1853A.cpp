#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int> tmp(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tmp[i] = arr[i];
    }
    sort(tmp.begin(),tmp.end());
    if(tmp!=arr){
        cout<<0<<endl;
        return;
    }
    int diff = INT_MAX;
    for(int i=1;i<n;i++){
        diff = min(diff,arr[i]-arr[i-1]);
    }
    cout<<diff/2 + 1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}