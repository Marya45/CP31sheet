#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    int cnt = 0;
    for(auto it:s){
        cnt += (it==c);
    }
    if(cnt==n){
        cout<<"0\n";
        return;
    }

    bool found = false;
    for (int d = 1; d <= n; d++) {
      int cc = 0;
      for (int i = d; i <= n; i += d) {
        cc += (s[i - 1] != c);
      }
      if (cc == 0) {
        cout << 1 << '\n';
        cout << d << '\n';
        found = true;
        break;
      }
    }
    if (!found) {
      cout << 2 << '\n';
      cout << n - 1 << " " << n << '\n';
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