#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    int prod=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
        prod *= arr[i];
    }
    if(sum>=0){
        if(prod==1){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
    else{
        int tmp = (-sum/2)+(sum%2!=0);
        if(tmp%2==0){
            if(prod==1){
                cout<<tmp<<endl;
            }
            else{
                cout<<tmp+1<<endl;
            }
        }
        else{
            if(prod==1){
                cout<<tmp+1<<endl;
            }
            else{
                cout<<tmp<<endl;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}