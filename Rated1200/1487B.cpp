#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    k--;
    if(n%2==0){
        cout<<k%n + 1<<"\n";
    }
    else{
        ll val = n/2;
        cout<< (k + (n%2)*(k/val)) % n + 1 <<"\n";
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}