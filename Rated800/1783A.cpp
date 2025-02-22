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
    int tmp[n];
    int s=0,e=n-1;
    int ind=0;
    while(s<e){
        tmp[ind++] = arr[e];
        tmp[ind++] = arr[s];
        s++;
        e--;
        if(s==e){
            tmp[ind] = arr[s];
        }
    }
    int sum=tmp[0];
    for(int i=1;i<n;i++){
        if(tmp[i]==sum){
            cout<<"NO"<<endl;
            return;
        }
        else{
            sum += arr[i];
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<tmp[i]<<" ";
    }cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}