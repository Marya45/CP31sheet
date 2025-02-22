#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int ans = n;
    int b = 0;
    int j=0;
    for(int i=0;i<n;i++){
        if(s[i]=='B'){
            b++;
        }
        if(i>=k-1){
            if(b>=k){
                ans = 0;
                break;
            }
            else{
                ans = min(ans,k-b);
            }
            if(s[j]=='B'){
                b--;
            }
            j++;
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}


// #include<bits/stdc++.h>
// using namespace std;

// void solve(){
//     int n,k;
//     cin>>n>>k;
//     string s;
//     cin>>s;
//     int ans = INT_MAX;

//     int prefix[n];
//     prefix[0]=0;
//     if(s[0]=='W'){
//         prefix[0]=1;
//     }

//     for(int i=1;i<n;i++){
//         prefix[i] = prefix[i-1] + (s[i]=='W');
//     }

//     for(int i=0;i<n;i++){
//         if(i+k-1>=n){
//             break;
//         }
//         int tmp = prefix[i+k-1]-prefix[i] + (s[i]=='W');
//         ans = min(ans,tmp);
//     }
    
//     if(n==1){
//         cout<<prefix[0]<<endl;
//         return;
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