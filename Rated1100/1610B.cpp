#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

bool process(vector<int>arr,int val){
    int n = arr.size();
    int i=0,j=n-1;
    while(i<=j){
        while(i<=j && arr[i]==val){
            i++;
        }
        while(j>=i && arr[j]==val){
            j--;
        }
        if(i<=j){
            if(arr[i]==arr[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
    }
    return true;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i=0,j=n-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            break;
        }
    }
    if(i>j){
        cout<<"YES\n";
        return;
    }
    bool ans = (process(arr,arr[i]) || process(arr,arr[j]));
    cout<< (ans ? "YES" : "NO")<<"\n";
}

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}