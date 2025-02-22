#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int xr = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xr ^= arr[i];
    }

    if(n%2==0){
        if(xr==0){
            cout<<0<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    else{
        cout<<xr<<endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}