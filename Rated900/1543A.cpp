#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0 0\n";
    }
    else{
        int d = abs(a-b);
        int op = min(a%d,d-a%d);
        cout<<d<<" "<<op<<"\n";
    }
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}