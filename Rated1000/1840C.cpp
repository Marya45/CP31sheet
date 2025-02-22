// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     long long int n,k,q;
//     cin>>n>>k>>q;
//     long long int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     long long int ans=0;
//     int j;
//     for(int i=0;i<n;i++){
//         if(a[i]<=q){
//             j=i;
//             while(j<n && a[j]<=q){
//                 j++;
//             }
//             if(j-i >= k){
//                 long long int len = j-i;
//                 ans += (len-k+1)*(len-k+2)/2;
//             }
//             i=j;
//         }
//     }
//     cout<<ans<<endl;
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void solve(){
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll> arr(n);
    vector<int> conti;
    ll tmp = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>q){
            tmp++;
        }
    }
    if(tmp==n){
        cout<<"0\n";
        return;
    }
    long long ans = 0;
    int i=0,j=0;
    while(j<n){
        if(arr[j]>q){
            while(i<j && arr[i]>q){
                i++;
            }
            while(i<j){
                ans += (j-i-k+1 > 0 ? j-i-k+1 : 0); //e-s-k+1 
                i++;
            }
        }
        j++;
    }
    while(i<j && arr[i]>q){
        i++;
    }
    while(i<j){
        ans += (j-i-k+1 > 0 ? j-i-k+1 : 0); //e-s-k+1 
        i++;
    }
    cout<<ans<<"\n";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}