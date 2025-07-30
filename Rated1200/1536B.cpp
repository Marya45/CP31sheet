#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    string S;
    cin>>S;
    vector<string> strings = {""};
    while (true) {
        vector<string> nstrings;
        for (auto &str : strings){
            for (int c = 0; c < 26; c++) {
                string nstr = str + char('a' + c);
                nstrings.push_back(nstr);
 
                if (S.find(nstr) == string::npos){
                    cout<<nstr<<"\n";
                    return;
                }
            }
        }
        strings.swap(nstrings);
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