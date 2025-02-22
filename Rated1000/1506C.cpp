#include <bits/stdc++.h>
using namespace std;

void solve(){
    string a,b;
    cin>>a>>b;
    int n = a.length() , m = b.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    int ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                // dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                dp[i][j] = 0;
            }
            ans = max(ans,dp[i][j]);
        }
    }
    cout<<n+m-2*ans<<"\n";
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}