#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,d;
    cin>>n>>d;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        if(arr[0] > d){
            cout<<"1\n";
        }
        else{
            cout<<"0\n";
        }
        return;
    }
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    int ans = 0;
    while(i<=j){
        ll curr = arr[j];
        while(i<j && curr<=d){
            curr += arr[j];
            i++;
        }
        if(curr > d){
            ans++;
        }
        j--;
    }
    cout<<ans<<"\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}