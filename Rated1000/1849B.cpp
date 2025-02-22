#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long int n,k;
    cin>>n>>k;
    long long int a[n+1];
    vector<pair<int,int>> v; //data,index
    for(int i=1;i<=n;i++){
        cin>>a[i];
        a[i] = a[i]%k; //reducing all to <=k
        if(a[i]==0){
            a[i] = k;
        }
        v.push_back({a[i],-i}); //-i because of smaller index first if data is same 
    }
    // for(auto i:v){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }cout<<endl;
    sort(v.begin(),v.end());
    // for(auto i:v){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }cout<<endl;
    reverse(v.begin(),v.end());
    // for(auto i:v){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }cout<<endl;
    for(auto i:v){
        cout<<-i.second<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}