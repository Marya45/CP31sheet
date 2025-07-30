#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    int mx=n,mn=1;
    while(r-l>2){
        if(arr[l]==mn){
            l++;
            mn++;
        }
        else if(arr[l]==mx){
            l++;
            mx--;
        }
        else if(arr[r]==mn){
            r--;
            mn++;
        }
        else if(arr[r]==mx){
            r--;
            mx--;
        }
        else{
            cout<<l+1<<" "<<r+1<<"\n";
            return;
        }
    }
    cout<<"-1\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}