#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second = i;
    }
    for(int i=0;i<n;i++){
        cin>>b[i].first;
        b[i].second = i;
    }
    for(int i=0;i<n;i++){
        cin>>c[i].first;
        c[i].second = i;
    }

    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    int ans = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(a[i].second==b[j].second){
                continue;
            }
            for(int k=0;k<3;k++){
                if(c[k].second!=a[i].second && c[k].second!=b[j].second){
                    ans = max(ans,a[i].first+b[j].first+c[k].first);
                }
            }
        }
    }
    cout<<ans<<"\n";

}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}