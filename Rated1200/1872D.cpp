#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    int t_sum = n*(n+1)/2;
    if(x==y){
        cout<<"0\n";
    }
    else if(x==1){
        int t = n/y;
        int s = t*(t+1)/2;
        cout<<t_sum-s<<"\n";
    }
    else if(y==1){
        int t = n - n/x;
        int s = t*(t+1)/2;
        cout<<-s<<"\n";
    }
    else{
        int t = (x*y)/__gcd(x,y);
        int c = n/t;
        int a = n - (n/x - c);
        int b = n/y - c;
        cout<<t_sum - (a*(a+1)/2) - (b*(b+1)/2) <<"\n";
    }
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}