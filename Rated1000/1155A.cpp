#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> arr(n,-1);
    arr[n-1] = n-1;
    for(int i=n-2;i>=0;i--){
        if(s[i] > s[arr[i+1]]){
            cout<<"YES\n";
            cout<<i+1<<" "<<i+2<<"\n";
            return;
        }
        else{
            arr[i] = i;
        }
    }
    cout<<"NO\n";
}

int main(){
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}