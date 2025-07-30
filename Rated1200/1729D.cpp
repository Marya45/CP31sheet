#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n, answer = 0; cin >> n;
    vector<pair<int, int>>a(n);
 
    for(auto &i : a) cin >> i.first;  
    for(auto &i : a) cin >> i.second; 
 
    sort(a.begin(), a.end(), [&](auto a, auto b){
        return a.second - a.first < b.second - b.first;    
    });
 
    int i = 0, j = n - 1;
 
    while(i < j){
        int kharch = a[i].first + a[j].first;
        int pay = a[i].second + a[j].second;

        if(pay >= kharch){
            answer++;
            i++; j--;
        }
        else i++;
    }
 
    cout << answer << "\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}