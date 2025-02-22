#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int diff=0;
    for(int i=1;i<n;i++){
        diff = max(diff,arr[i]-arr[i-1]);
    }
    diff = max(diff,max(arr[0],2*(x-arr[n-1])));
    cout<<diff<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}