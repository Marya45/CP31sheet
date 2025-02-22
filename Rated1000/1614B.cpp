#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i] = {x,i};
    }
    sort(arr.begin(),arr.end());
    vector<int> ans(n);
    long long val = 0;
    int l=-1,r=1;
    for(int i=n-1;i>=0;i--){
        long long d1 = LONG_MAX;
        if(l >= -1e6){
            d1 = abs(1LL*2*l*arr[i].first);
        }
        long long d2 = LONG_MAX;
        if(r <= 1e6){
            d2 = abs(1LL*2*r*arr[i].first);
        }
        if(d1 <= d2){
            ans[arr[i].second] = l;
            val += d1;
            l--;
        }
        else{
            ans[arr[i].second] = r;
            val += d2;
            r++;
        }
    }

    cout<<val<<"\n0 ";
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
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