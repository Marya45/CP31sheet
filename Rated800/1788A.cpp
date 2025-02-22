#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    long long int tmp[n];
    if(arr[0]==2){
        tmp[0] = 1;
    }
    else{
        tmp[0] = 0;
    }
    for(int i=1;i<n;i++){
        if(arr[i]==2){
            tmp[i] = 1+tmp[i-1];
        }
        else{
            tmp[i] = tmp[i-1];
        }
    }

    for(int i=0;i<n-1;i++){
        if(tmp[i] == tmp[n-1]-tmp[i]){
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}