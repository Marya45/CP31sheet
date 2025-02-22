#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    long long p2 = 1;
    long long p3 = 1;
    long long p4 = 1;
    long long p5 = 1;
    int tmp5 = INT_MAX;
    int tmp3 = INT_MAX;
    int tmp4 = INT_MAX;
    int tmp2 = INT_MAX;
    int od = 0 , ev = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        p2 *= arr[i];
        p3 *= arr[i];
        p4 *= arr[i];
        p5 *= arr[i];
        p2%=2;
        p3%=3;
        p4%=4;
        p5%=5;
        tmp5 = min({tmp5,abs(arr[i]%10 - 10),abs(arr[i]%5 -5 )});
        tmp3 = min(tmp3,abs(arr[i]%3 - 3));
        tmp4 = min(tmp4,abs(arr[i]%4 - 4));
        tmp2 = min(tmp2,abs(arr[i]%2 - 2));
        if(arr[i]%2==0){
            ev++;
        }
        else{
            od++;
        }
    }
    // if(prod%k==0){
    //     cout<<"0\n";
    //     return;
    // }
    if(k==2){
        if(p2==0){
            cout<<"0\n";
            return;
        }
        cout<<tmp2<<"\n";
        return;
    }
    if(k==5){
        if(p5==0){
            cout<<"0\n";
            return;
        }
        cout<<tmp5<<"\n";
        return;
    }
    if(k==3){
        if(p3==0){
            cout<<"0\n";
            return;
        }
        cout<<tmp3<<"\n";
        return;
    }
    if(k==4){
        if(p4==0){
            cout<<"0\n";
            return;
        }
        if(ev>0){
            cout<<min(tmp4,1)<<"\n";
        }
        else{
            cout<<min(tmp4,2)<<"\n";
        }
    }
    return;
        
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}