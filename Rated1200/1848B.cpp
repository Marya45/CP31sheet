#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> arr(k+1);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        arr[x].push_back(i);
    }
    int mx = 0, mn = n-1;
    for(int i=1;i<k+1;i++){
        if(arr[i].empty()){
            continue;
        }
        mx = arr[i][0];
        int x = arr[i][0];
        vector<int> cnt; 
        cnt.push_back(mx);
        for(int j=1;j<arr[i].size();j++){
            mx = max(mx, arr[i][j] - x- 1);
            cnt.push_back(arr[i][j] - x- 1);
            x = arr[i][j];
        }
        mx = max(mx, n - x - 1); 
        cnt.push_back(n - x - 1);
        mx /= 2;
        cnt.push_back(mx);
        sort(cnt.begin(), cnt.end());
        cnt.pop_back();
        if(cnt.size()){mn = min(mn, cnt.back());}
    }
    cout<<mn<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}