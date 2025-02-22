#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,y,k;
    cin>>x>>y>>k;
    ll num = 1LL*y*k + k - 1;
    ll den = x-1;
    cout<<((num+den-1)/den) + k<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}