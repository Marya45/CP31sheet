#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans = n+1;
    for(char c='a';c<='z';c++){
        int l=0,r=n-1,cnt=0;
        while(l<=r){
            if(s[l]==s[r]){
                l++;r--;
            }
            else if(s[l]==c){
                cnt++;
                l++;
            }
            else if(s[r]==c){
                cnt++;
                r--;
            }
            else{
                cnt = n+1;
                break;
            }
        }
        ans = min(ans,cnt);
    }
    cout<<(ans==n+1 ? -1:ans)<<"\n"; 
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}