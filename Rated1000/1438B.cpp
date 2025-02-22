#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    set<int> st;
    bool found = false;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(st.count(x)){
            found = true;
        }
        st.insert(x);
    }
    if(found){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}