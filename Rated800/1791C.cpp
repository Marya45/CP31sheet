#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int l=0,r=n-1;
    while(l<r){
        if(s[l]!=s[r]){
            l++;
            r--;
        }
        else{
            break;
        }
    }
    cout<<r-l+1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}