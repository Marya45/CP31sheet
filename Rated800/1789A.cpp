#include<bits/stdc++.h>
using namespace std;

// int gcd(int a,int b){
//     int ans = min(a,b);
//     while(ans>0){
//         if(a%ans==0 && b%ans==0){
//             break;
//         }
//         ans--;
//     }
//     return ans;
// }

void solve(){
    int n;
    cin>>n;
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(__gcd(arr[i],arr[j]) <= 2){
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}