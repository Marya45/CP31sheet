#include<bits/stdc++.h>
using namespace std;

int find(int i,vector<int>&arr){
    int l=0,r=arr.size()-1;
    int ans = -1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] > i){
            ans = arr[mid];
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    char ch;
    string s;
    cin>>ch;
    cin>>s;
    if(ch=='g'){
        cout<<"0\n";
        return;
    }
    s += s;
    vector<int> v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='g'){
            v.push_back(i);
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            int tmp = find(i,v);
            ans = max(ans,tmp-i);
        }
    }
    cout<<ans<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}