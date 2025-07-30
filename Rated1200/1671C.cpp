#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,x;
    cin>>n>>x;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        arr[i] += arr[i-1];
    }
    int mx = abs(arr[n-1] - x);
    int ans = 0;
    int days = 0;
    for(int i=0;i<n;i++){
        int st = 1;
        int end = 1e10;
        int cnt = 0;
        while(st<=end){
            int mid = (st+end)/2;
            int val = arr[i] + ((mid-1)*(i+1));
            if(val <= x){
                cnt = max(cnt,mid);
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        ans += cnt;
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