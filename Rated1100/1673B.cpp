#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    string s;
    cin>>s;
    set<char> st;
    for(auto it:s){
        st.insert(it);
    }
    int n = s.length();
    for(int i=st.size();i<n;i++){
        if(s[i]!=s[i-(st.size())]){
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