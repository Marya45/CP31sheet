#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    bool isflipped = false;
    int c0=0,c1=0;
    vector<int> ispref(n);
    for(int i=0;i<n;i++){
        c0 += a[i]=='0';
        c1 += a[i]=='1';
        ispref[i] = (c0==c1);
    }

    for(int i=n-1;i>=0;i--){
        if(isflipped){
            a[i] = (a[i]=='1' ? '0':'1');
        }
        if(a[i]==b[i]){
            continue;
        }

        if(ispref[i]){
            isflipped = !isflipped;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}