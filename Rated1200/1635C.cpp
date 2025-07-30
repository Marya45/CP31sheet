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
    if(arr[n-2] > arr[n-1]){
        cout<<"-1\n";
    }
    else{
        if(arr[n-1]<0){
            if(is_sorted(arr.begin(),arr.end())){
                cout<<"0\n";
            }
            else{
                cout<<"-1\n";
            }
        }
        else{
            cout<<n-2<<"\n";
            for(int i=1;i<=n-2;i++){
                cout<<i<<" "<<n-1<<" "<<n<<"\n";
            }
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