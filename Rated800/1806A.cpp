#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==c && b==d){
        cout<<0<<endl;
        return;
    }
    if(b > d){
        cout<<-1<<endl;
        return;
    }
    int new_a = d-b+a;
    if(new_a >= c){
        cout<<(d-b)+(d-b)+a-c<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}