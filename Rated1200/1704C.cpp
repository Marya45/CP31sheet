#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,m;
    cin>>n>>m;
    vector<int> arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    vector<int> gaps;
    for(int i=0;i<m-1;i++){
        gaps.push_back(arr[i+1]-arr[i]-1);
    }
    gaps.push_back(n-arr[m-1]+arr[0]-1);

    sort(gaps.rbegin(),gaps.rend());
    
    int saved = 0 , days = 0;
    for(auto gap:gaps){
        int curr_gap = gap - days*2;
        if(curr_gap > 0){
            saved++;
            curr_gap -= 2;
            if(curr_gap>0){
                saved += curr_gap;
            }
            days += 2;
        }
    }
    cout<<n-saved<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}