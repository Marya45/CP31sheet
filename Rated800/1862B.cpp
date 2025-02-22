#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int i=1;
    vector<int> ans;
    ans.push_back(b[0]);
    while(i<n){
        if(b[i]>=b[i-1]){
            ans.push_back(b[i]);
        }
        else{
            ans.push_back(b[i]);
            ans.push_back(b[i]);
        }
        i++;
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}