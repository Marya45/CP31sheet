#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> a(n),b(n),c(n);
    for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){cin>>b[i];}
    for(int i=0;i<n;i++){cin>>c[i];}
    
    int u = 0;

    for(int i=0;i<n;i++){
        if((x|a[i]) != x){
            break;
        }
        u |= a[i];
    }

    for(int i=0;i<n;i++){
        if((x|b[i]) != x){
            break;
        }
        u |= b[i];
    }

    for(int i=0;i<n;i++){
        if((x|c[i]) != x){
            break;
        }
        u |= c[i];
    }

    cout<< ( u==x ? "YES\n" : "NO\n");
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}