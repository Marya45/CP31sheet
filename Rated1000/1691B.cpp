#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]].push_back(i);
    }
    if(n==1){
        cout<<"-1\n";
        return;
    }
    vector<int> ans(n);
    for(auto it:mp){
        vector<int> tmp = it.second;
        if(tmp.size()==1){
            cout<<"-1\n";
            return;
        }
        int i=0,j=tmp.size()-1;
        while(i<j){
            ans[tmp[i]] = tmp[j];
            ans[tmp[j]] = tmp[i];
            i++;
            j--;
        }
        if(tmp.size()%2!=0){
            ans[tmp[i]] = ans[tmp[i+1]];
            ans[tmp[i+1]] = tmp[i];
        }
    }
    for(auto it:ans){
        cout<<it+1<<" ";
    }
    cout<<"\n";
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
//     int n;
//     cin>>n;
//     int arr[n];
//     map<int,int> mp;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//         mp[arr[i]]++;
//     }
//     for(auto it:mp){
//         if(it.second==1){
//             cout<<-1<<endl;
//             return;
//         }
//     }
//     int p=1;
//     for(int i=0;i<n;i++){
//         mp[arr[i]]--;
//         if(mp[arr[i]]==0){
//             cout<<p<<" ";
//             p = i+2;
//         }
//         else{
//             cout<<i+2<<" ";
//         }
//     }cout<<endl;
    

// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         solve();
//     }
// }