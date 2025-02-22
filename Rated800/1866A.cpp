#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int mn = INT_MAX;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mn = min(mn,abs(arr[i]));
    }
    cout<<mn<<endl;
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}