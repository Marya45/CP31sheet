#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = 0;
    for(int i=1;i<=n;i++){
        if(s[i-1]=='0' || s[i-1]=='3'){
            int cnt = 0;
            for(int j=i;j<=n;j+=i){
                if(s[j-1]=='0'){
                    cnt++;
                    s[j-1] = '3';
                }
                else if(j==i || s[j-1]=='3'){
                    
                }
                else{
                    break;
                }
            }
            ans += (cnt*i);
        }
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