#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
long long int LCM(long long int a, long long int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 

void solve(){
    long long int n;
    cin>>n;

    int mnlcm=INT_MAX;
    // int a=0,b=0;

    // if(n%2==0){
    //     cout<<n/2<<" "<<n/2<<endl;
    //     return;
    // }

    // for(int i=1;i<=n/2;i++){
    //     long long int l = LCM(i,n-i);
    //     if(l < mnlcm){
    //         a = i;
    //         b = n-i;
    //         mnlcm = l;
    //         // cout<<mnlcm<<endl;
    //     }
    // }

    int a=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            a = n/i;
            break;
        }
    }

    cout<<a<<" "<<n-a<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}