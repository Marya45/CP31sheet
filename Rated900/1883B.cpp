#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> v(26,0);
    for(auto it:s){
        v[it-'a']++;
    }
    int tmp = n-k;
    if(tmp<2){
        cout<<"YES"<<endl;
        return;
    }
    if(tmp%2==0){
        int cnt=0;
        for(auto it:v){
            if(it%2!=0){
                cnt++;
            }
        }
        if(cnt>k || (k-cnt)%2!=0){
            cout<<"NO"<<endl;
            return;
        }
    }
    else{
        int cnt=0;
        for(auto it:v){
            if(it%2!=0){
                cnt++;
            }
        }
        if(cnt>k+1 || (k-cnt)%2==0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}