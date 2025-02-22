#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }

    int ans=0;
    long long int prev = arr[0]%2;
    for(int i=1;i<n;i++){
        if(prev == arr[i]%2){
            prev = (prev*arr[i])%2;
            ans++;
        }
        else{
            prev = arr[i]%2;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}