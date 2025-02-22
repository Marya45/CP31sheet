#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]==arr[n-1] || n==2){
        cout<<"YES"<<endl;
    }
    else if(n==3){
        if((arr[0]+arr[1] == arr[1]+arr[2])||(arr[0]+arr[2] == arr[1]+arr[2])||(arr[0]+arr[1] == arr[0]+arr[2])){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        unordered_map<int,int> mp;
        for(auto it:arr){
            mp[it]++;
        }
        if(mp.size()==2){
            int diff = 0;
            for(auto it:mp){
                diff -= it.second;
                diff = abs(diff);
            }
            if(abs(diff)==1 || abs(diff)==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
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