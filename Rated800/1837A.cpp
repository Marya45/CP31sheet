#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,k;
    cin>>x>>k;
    if(x==1){
        cout<<1<<endl<<1<<endl;
    }
    else if(x%k!=0){
        cout<<1<<endl<<x<<endl;
    }
    else{
        cout<<2<<endl<<x-1<<" "<<1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}