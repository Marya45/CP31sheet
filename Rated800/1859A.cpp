#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==arr[n-1]){
        cout<<-1<<endl;
    }
    else{
        int i=1;
        while(i<n){
            if(arr[i]!=arr[i-1]){
                break;
            }
            i++;
        }

        cout<<i<<" "<<n-i<<endl;
        for(int j=0;j<n;j++){
            if(j==i){
                cout<<endl;
            }
            cout<<arr[j]<<" ";
        }cout<<endl;

    }
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}