#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

int process(vector<int>&arr,int cnt,int st){
    int n = arr.size();
    int gcd = 0;
    for(int i=cnt;i<n;i+=2){
        gcd = __gcd(gcd,arr[i]);
    }
    for(int i=st;i<n;i+=2){
        if(arr[i]%gcd==0){
            return 0;
        }
    }
    return gcd;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int gcd1 = process(arr,0,1);
    int gcd2 = process(arr,1,0);
    if(gcd1==0 && gcd2==0){
        cout<<"0\n";
    }
    else{
        cout<<max(gcd1,gcd2)<<"\n";
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