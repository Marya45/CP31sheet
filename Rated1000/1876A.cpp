#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,p;
    cin>>n>>p;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        v.push_back({b[i],a[i]}); //cost , cnt
    }
    sort(v.begin(),v.end());
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    long long ans=0;
    int cnt=n;
    ans += p;
    cnt--;
    for(int i=0;i<n;i++){
        if(cnt==0){
            break;
        }
        long long mul = min(cnt,v[i].second);
        cnt-=mul;
        long long fact = min(p,v[i].first);
        ans += (long long)(fact*mul);
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}