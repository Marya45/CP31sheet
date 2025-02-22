#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,r,b;
    cin>>n>>r>>b;
    string ans;

    int tmp = r/(b+1);
    int extra = r%(b+1);

    while(b>0){
        for(int i=0;i<tmp;i++){
            ans += "R";
            r--;
        }
        if(extra>0){
            ans += "R";extra--;
            r--;
        }
        ans+="B";
        b--;
    }
    while(r>0){
        ans+="R";
        r--;
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