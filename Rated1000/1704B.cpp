#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,x;
    cin>>n>>x;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<0<<endl;
        return;
    }
    long long int low = abs(arr[0]-x);
    long long int high = arr[0]+x;
    long long int cnt=0;

    for(int i=1;i<n;i++){
        high = min(high,arr[i]+x);
        low = max(low,arr[i]-x);
        if(low>high){
            cnt++;
            high = abs(arr[i]+x);
            low = abs(arr[i]-x);
        }
    }

    cout<<cnt<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}