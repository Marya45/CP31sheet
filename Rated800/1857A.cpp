#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int odd=0;
    int even=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(n==2){
        if(even==0 || odd==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }
    if(odd==0){
        cout<<"YES"<<endl;
        return;
    }
    if(even==0){
        if(odd%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        return;
    }

    if(odd%2!=0){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}