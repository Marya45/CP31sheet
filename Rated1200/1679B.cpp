#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,q;
    cin>>n>>q;
    int sum = 0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    
    int t,i,x;
    int prev_val = -1;
    map<int,int> mp;
    while(q--){
        cin>>t;
        if(t==1){
            cin>>i>>x;
            if(prev_val!=-1){
                if(mp.find(i-1)!=mp.end()){
                    arr[i-1] = mp[i-1];
                }
                else{
                    arr[i-1] = prev_val;
                }
            }
            sum -= arr[i-1];
            arr[i-1] = x;
            sum += arr[i-1];
            mp[i-1] = x;
        }
        else{
            cin>>x;
            sum = (n*x);
            prev_val = x;
            mp.clear();
        }
        cout<<sum<<"\n";
    }

}

signed main(){
    fastio();
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}