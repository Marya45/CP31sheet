#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long
const int MUL = 2022;
const int MOD = 1e9+7;

void solve(){
    int n;
    cin>>n;
    cout<< ((((n*(n+1))%MOD)*(4*n-1))%MOD*(MUL/6))%MOD <<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}