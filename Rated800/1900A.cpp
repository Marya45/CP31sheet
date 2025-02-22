#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    string s;
    cin>>n>>s;
    int cnt=0;
    int dot=0;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++;
        }
        else{
            if(cnt>=3){
                flag = true;
            }
            dot += cnt;
            cnt = 0;
        }
    }
    if(flag || cnt>=3){
        cout<<2<<endl;
    }
    else{
        cout<<dot+cnt<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}