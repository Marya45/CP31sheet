#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

bool possible(int l,int &t,vector<int>&arr,int val){
    int n = arr.size();
    int r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid]>val){
            l = mid+1;
        }
        else{
            if(arr[mid]==val){
                t = max(t,n-mid);
            }
            r = mid-1;
        }
    }
    return t>0;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> suff(n);
    suff[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--){
        suff[i] += suff[i+1] + arr[i];
    }
    int ans = 0;
    int lsum = 0;
    for(int i=0;i<n;i++){
        lsum += arr[i];
        int j = 0;
        if(possible(i+1,j,suff,lsum)){
            ans = max(ans,i+1+j);
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