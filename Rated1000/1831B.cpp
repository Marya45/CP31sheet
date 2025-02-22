#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
    int n;
    cin>>n;
    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int> mp1,mp2;
    
    int i=0;
    while(i<n){
        int val = a[i];
        int cnt = 0;
        while(i<n && a[i]==val){
            i++;
            cnt++;
        }
        mp1[val] = max(mp1[val],cnt);
    }
    i = 0;
    while(i<n){
        int val = b[i];
        int cnt = 0;
        while(i<n && b[i]==val){
            i++;
            cnt++;
        }
        mp2[val] = max(mp2[val],cnt);
    }
    int ans = 0;
    for(auto it:mp1){
        int v = it.second;
        int val = mp2[it.first];
        ans = max(ans,v + val);
    }
    for(auto it:mp2){
        int v = it.second;
        int val = mp1[it.first];
        ans = max(ans,v + val);
    }
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}