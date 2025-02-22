#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll sumn(ll n){
    return n*(n+1)/2;
}

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;
    ll mx_sum = sumn(n) - sumn(n-k);
    ll mn_sum = sumn(k);
    if(x>=mn_sum && x<=mx_sum){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}