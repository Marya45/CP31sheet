#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> cnt(26,0),p(26,0);
    for(auto it:s){
        cnt[it-'a']++;
    }

    int ans=0;

    for(auto it:s){

        --cnt[it-'a']; //removind from last
        ++p[it-'a']; //adding curr ele
        int curr=0;
        for(int i=0;i<26;i++){
            curr += min(1,cnt[i])+min(1,p[i]);
        }
        ans = max(ans,curr);
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