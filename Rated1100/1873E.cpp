#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool possible(ll h,vector<ll>&arr,ll x){
    int n = arr.size();
    ll sum = 0;
    for(int i=0;i<n;i++){
        sum += (h-arr[i] >=0 ? h-arr[i]:0);
        if(sum>x){
            return false;
        }
    }
    return sum<=x;
}

void solve(){
    ll n,x;
    cin>>n>>x;
    vector<ll> arr(n);
    ll left = 1, right = 1e18;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll ans = -1;
    while(left <= right){
        ll mid = (left+right)/2;
        if(possible(mid,arr,x)){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}