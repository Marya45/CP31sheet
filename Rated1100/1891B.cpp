#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,q;
    cin>>n>>q;
    vector<ll> a(n),b(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>b[i];
    }
    set<ll> st;
    for(int i=0;i<q;i++){
        if(st.count(b[i])){
            continue;
        }
        st.insert(b[i]);
        for(int j=0;j<n;j++){
            if(a[j]%(1<<b[i]) == 0){
                a[j] += (1<<(b[i]-1));
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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