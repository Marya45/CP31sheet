#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a<b){
        cout<<"1\n";
        return;
    }
    if(a==b){
        cout<<"2\n";
        return;
    }
    int ans = INT_MAX;
    for(int i=0;i<30;i++){
        int tmp_b = b+i;
        if(tmp_b==1){
            continue;
        }
        int tmp_a = a;
        int cnt = i;
        while(tmp_a > 0){
            tmp_a = tmp_a/tmp_b;
            cnt++;
        }
        ans = min(ans,cnt);
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