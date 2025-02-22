#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,int>> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end());
    for(int i=1;i<n;i++){
        arr[i].first += arr[i-1].first;
    }
    vector<int> ans(n);
    int nxt_cnt = n-1;
    ll nxt_val = 0;
    for(int i=n-1;i>=0;i--){
        ll val = arr[i].first - (i>0 ? arr[i-1].first : 0);
        int ind = arr[i].second;
        int cnt = i;
        if(arr[i].first >= nxt_val){
            cnt = nxt_cnt;
        }
        ans[ind] = cnt;
        nxt_cnt = cnt;
        nxt_val = val;
    }
    
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}