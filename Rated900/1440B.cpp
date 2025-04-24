#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n*k);
    deque<int> dq;
    for(int i=0;i<n*k;i++){
        cin>>arr[i];
        dq.push_back(arr[i]);
    }
    int ans = 0;
    while(!dq.empty()){
        int last = n/2+1;
        int first = n-last;
        vector<int> tmp;
        while(last--){
            tmp.push_back(dq.back());
            dq.pop_back();
        }
        while(first--){
            tmp.push_back(dq.front());
            dq.pop_front();
        }
        sort(tmp.begin(),tmp.end());
        int med = (n+1)/2-1;
        ans += tmp.at(med);
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