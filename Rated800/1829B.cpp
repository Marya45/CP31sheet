#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int cnt=0;
    int tmp=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==0){
            tmp++;
        }
        else{
            cnt = max(cnt,tmp);
            tmp = 0;
        }
    }
    cout<<max(cnt,tmp)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}