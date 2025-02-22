#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    long long int sec_min_sum = 0; //sec min sum
    long long int m = INT_MAX; //minmum element
    long long int sm_sec_min = INT_MAX;//smallest sec min
    while(n--){
        int k;
        cin>>k;
        long long int a[k];
        long long int fmin=INT_MAX,smin=INT_MAX;
        for(int i=0;i<k;i++){
            cin>>a[i];
            if(a[i] < fmin){
                smin = min(smin,fmin);
                fmin = a[i];
            }
            else{
                smin = min(smin,a[i]);
            }
        }
        m = min(fmin,m);
        sec_min_sum += smin;
        sm_sec_min = min(smin,sm_sec_min);
    }
    cout<<sec_min_sum + m - sm_sec_min<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}