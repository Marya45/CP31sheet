#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int open = 0 , close = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            open++;
        }
        else{
            if(open > 0){
                open--;
            }
            else{
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}