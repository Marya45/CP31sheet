#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll n){
    ll orig  = n;
    while(n>0){
        int last_dig = n%10;
        n /= 10;
        if(last_dig!=0){
            if(orig%last_dig!=0){
                return false;
            }
        }
    }
    return true;
}

void solve(){
    ll n;
    cin>>n;
    while(true){
        if(check(n)){
            cout<<n<<"\n";
            return;
        }
        n++;
    }
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
}