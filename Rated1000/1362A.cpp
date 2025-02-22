#include<bits/stdc++.h>
using namespace std;
#define ll long long 

void solve(){
    ll a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0\n";
        return;
    }
    if(a>b){
        swap(a,b);
    }
    int cnt = 0;
    while(a<b){
        if(a*8<=b){
            a*=8;
        }
        else if(a*4<=b){
            a*=4;
        }
        else if(a*2<=b){
            a*=2;
        }
        else{
            cout<<"-1\n";
            return;
        }
        cnt++;
    }
    if(a==b){
        cout<<cnt<<"\n";
    }
    else{
        cout<<"-1\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}