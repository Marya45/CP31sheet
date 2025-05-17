#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    string s;
    cin>>s;
    int cnt = 0;
    int n = s.length();
    int i=0;
    while(i<n){
        if(s[i]=='0'){
            i++;
            continue;
        }
        int j=i+1;
        while(j<n && s[j]=='1'){
            j++;
        }
        cnt = max(cnt,j-i);
        i=j;
    }
    if(cnt==n){
        cout<<n*n<<"\n";
        return;

    }
    if(s[0]=='1' && s[n-1]=='1'){
        i=0;
        int tmp = 0;
        while(i<n && s[i]=='1'){
            i++;
            tmp++;
        }
        int j=n-1;
        while(j>i && s[j]=='1'){
            j--;
            tmp++;
        }
        cnt = max(cnt,tmp);
    }
    cnt++;
    int t = (cnt+1)/2;
    cout<<(t)*(cnt/2)<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}