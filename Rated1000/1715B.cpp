#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k, b, s;
    cin>>n>>k>>b>>s;
    vector<long long> a(n,0);
    a[0] = k*b;
    s = s-k*b;
    if(s < 0){
        cout<<"-1\n";
        return;
    }
    for(int i=0;i<n;i++){
        a[i] += min(s,k-1);
        s -= min(s,k-1);
    }
    if(s!=0){
        cout<<"-1\n";
        return;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;

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
//     long long n, k, b, s;
//     cin>>n>>k>>b>>s;
//     if(s<(k*b) || s>(k*b+n*(k-1))){
//         cout<<-1<<endl;
//         return;
//     }
//     vector<long long> a(n,0);
//     a[0] = k*b;
//     s = s-k*b;
//     for(int i=0;i<n;i++){
//         if(s>0){
//             long long t = min(s,k-1);
//             a[i] += t;
//             s -= t;
//         }
//         else{
//             a[i] += 0;
//         }
//     }
//     if(s<0){
//         cout<<-1<<endl;
//         return;
//     }

//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }cout<<endl;

// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }