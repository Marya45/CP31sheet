#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    if(k==1 && x==1){
        cout<<"NO"<<endl;
        return;
    }
    if(x!=1){
        cout<<"YES"<<endl;
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }cout<<endl;
        return;
    }
    else{
        int diff = (k*(k+1)/2)-x;
        if(diff==2 && n%2!=0){
            cout<<"NO"<<endl;
            return;
        }
        if(n%2==0){
            cout<<"YES"<<endl<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }cout<<endl;
            return;
        }
        if(n%3==0){
            cout<<"YES"<<endl<<n/3<<endl;
            for(int i=0;i<n/3;i++){
                cout<<3<<" ";
            }cout<<endl;
            return;
        }
        else{
            cout<<"YES"<<endl;
            vector<int> ans;
            while(n%2!=0){
                n-=3;
                ans.push_back(3);
            }
            while(n!=0){
                n-=2;
                ans.push_back(2);
            }
            cout<<ans.size()<<endl;
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }cout<<endl;
            
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