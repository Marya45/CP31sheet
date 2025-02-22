#include<bits/stdc++.h>
using namespace std;
const int N = 3 * 1e5 + 10;
vector<int> arr(N);

void precompute(){
    arr[0] = 0;
    for(int i=1;i<N;i++){
        arr[i] = arr[i-1]^i;
    }
}

void solve(){
    int a,b;
    cin>>a>>b;
    if(b==0 && a==1){
        cout<<"1\n";
        return;
    }
    if(arr[a-1] == b){
        cout<<a<<"\n";
        return;
    }
    int req = arr[a-1]^b;
    if(req==a){
        cout<<a+2<<"\n";
    }
    else{
        cout<<a+1<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    precompute();
    while(t--){
        solve();
    }
}