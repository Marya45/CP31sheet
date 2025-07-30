#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int query(int l,int r,vector<int>&a){
    return a[r] - (l ? a[l-1]:0);
}

void solve(){
    int n,s;
    cin>>n>>s;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i){
            arr[i] += arr[i-1];
        }
    }
    if(arr[n-1]<s){
        cout<<"-1\n";
        return;
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        int l=i,r=n-1;
        int pos = -1;
        while(l<=r){
            int mid = (l+r)/2;
            if(query(i,mid,arr) <=s){
                pos = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(pos==-1 || query(i,pos,arr)!=s){
            continue;
        }
        ans = min(ans,n-(pos-i+1));
    }
    if(ans==INT_MAX){
        ans = -1;
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