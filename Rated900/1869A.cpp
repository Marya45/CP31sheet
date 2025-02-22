#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int xor_val = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        xor_val = xor_val^arr[i];
    }
    if(xor_val==0){
        cout<<"1\n";
        cout<<1<<" "<<n<<"\n";
    }
    else if(n%2==0){
        cout<<"2\n";
        cout<<1<<" "<<n<<"\n";
        cout<<1<<" "<<n<<"\n";
    }
    else{
        cout<<4<<"\n";
        cout<<1<<" "<<2<<"\n";
        cout<<1<<" "<<2<<"\n";
        cout<<2<<" "<<n<<"\n";
        cout<<2<<" "<<n<<"\n";
    }
        
}
    
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}