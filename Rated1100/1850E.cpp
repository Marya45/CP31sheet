#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,tot;
    cin>>n>>tot;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = -1;
    int l = 0 , r = 1e9;
    while(l<=r){
        int mid = (l+r)/2;
        int sum = 0;

        for(int i=0;i<n;i++){
            sum += (arr[i]+2*mid)*(arr[i]+2*mid);
            if(sum>tot){
                break;
            }
        }

        if(sum==tot){
            cout<<mid<<"\n";
            return;
        }
        if(sum>tot){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}