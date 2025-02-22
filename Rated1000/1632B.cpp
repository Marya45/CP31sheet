#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int p = 1;
    while(p*2 < n){
        p = p*2;
    }
    for(int i=p-1;i>=0;i--){
        cout<<i<<" ";
    }
    cout<<p<<" ";
    for(int i=p+1;i<n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}