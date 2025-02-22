#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    int sum = 0;
    int cnt = 0;
    int mn = INT_MAX;
    int zero = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            if(arr[i][j] < 0){
                cnt++;
            }
            if(arr[i][j] == 0){
                zero++;
            }
            sum += abs(arr[i][j]);
            mn = min(mn,abs(arr[i][j]));
        }
    }
    if(cnt%2==0 || zero>0){
        cout<<sum<<"\n";
    }
    else{
        cout<<sum-2*mn<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}