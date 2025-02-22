#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> sieve(int n)
{
    // Prime no till n
    vector<int> prime(n+1,1);
    vector<ll> ans;
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            ans.push_back(i);
            for(int j=2*i;j<=n;j+=i){
                prime[j] = 0;
            }
        }
    }
    return ans;
}

ll find(ll val,vector<ll> &prime){
    int left = 0 , right = prime.size()-1;
    ll ans = 1e6;
    while(left<=right){
        int mid = (left+right)/2;
        if(prime[mid]>=val){
            ans = prime[mid];
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    return ans;
}

void solve(vector<ll>&prime){
    int d;
    cin>>d;
    ll f = 1;
    ll s = find(f+d,prime);
    ll t = find(s+d,prime);
    cout<<1ll*s*t<<"\n";
}

int main() {
    int t;
    cin>>t;
    vector<ll> prime = sieve(100000);
    while(t--){
        solve(prime);
    }

}