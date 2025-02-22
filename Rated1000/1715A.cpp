#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if(n==1 && m==1){
        cout<<0<<endl;
        return;
    }
    if(n==1 || m==1){
        if(n==1){
            cout<<m<<endl;
            return;
        }
        else{
            cout<<n<<endl;
            return;
        }
    }
    else{
        cout<<(n+m-2) + min(n,m)<<endl; //megan,stanley
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}