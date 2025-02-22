#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,xk,yk,xq,yq;
    cin>>a>>b>>xk>>yk>>xq>>yq;
    set<pair<int,int>> k,q;
    int dx[8] = {-a,-a,-b,-b,b,b,a,a};
    int dy[8] = {-b,b,-a,a,-a,a,-b,b};
    for(int i=0;i<8;i++){
        k.insert({xk+dx[i],yk+dy[i]});
        q.insert({xq+dx[i],yq+dy[i]});
    }
    int ans=0;
    for(auto it:k){
        if(q.find(it)!=q.end()){
            ans++;
        }
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