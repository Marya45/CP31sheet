#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,k;
    cin>>n>>k;
    if((k%2==0 && n%2!=0) || (n>3 && k==n-1 && n%2!=0)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}