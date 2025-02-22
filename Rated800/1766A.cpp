#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n<11){
        cout<<n<<endl;
        return;
    }
    if(n<20){
        cout<<10<<endl;
        return;
    }
    // else if(n<=100){
    //     cout<<n/10+9<<endl;
    // }
    // else if(n<=1000){
    //     cout<<n/100+18<<endl;
    // }
    // else if(n<=10000){
    //     cout<<n/1000+27<<endl;
    // }

    int num = 100;
    int div=10;
    int tmp = 9;
    while(true){
        if(n<=num){
            cout<<n/div+tmp<<endl;
            return;
        }
        else{
            div = num;
            num *= 10;
            tmp += 9;
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