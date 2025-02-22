#include<bits/stdc++.h>
using namespace std;

void solve(){
    int w,h;
    cin>>w>>h;
    long long int ans = 0;
    for(int i=0;i<2;i++){
        int k;
        cin>>k;
        int tmp = 0;
        vector<int> arr(k);
        for(int j=0;j<k;j++){
            cin>>arr[j];
        }
        tmp = arr[k-1] - arr[0];
        ans = max(ans,1LL*tmp*h);
    }
    for(int i=0;i<2;i++){
        int k;
        cin>>k;
        int tmp = 0;
        vector<int> arr(k);
        for(int j=0;j<k;j++){
            cin>>arr[j];
        }
        tmp = arr[k-1] - arr[0];
        ans = max(ans,1LL*tmp*w);
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}