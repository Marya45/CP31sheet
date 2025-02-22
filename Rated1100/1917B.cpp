#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> cnt(26,0);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(cnt[s[i]-'a']==0){
            cnt[s[i]-'a'] = 1;
            ans += (n-i);
        }
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