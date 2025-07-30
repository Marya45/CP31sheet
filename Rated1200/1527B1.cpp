#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += s[i]=='0';
    }
    if(cnt==1 || cnt%2==0){
        cout<<"BOB\n";
    }
    else{
        cout<<"ALICE\n";
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