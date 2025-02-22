#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    if(s.length()==1){
        cout<<1<<endl;
        return;
    }
    int o=0,z=0;
    for(char c:s){
        if(c=='1'){
            o++;
        }
        else{
            z++;
        }
    }
    if(o==z){
        cout<<0<<endl;
        return;
    }
    if(o==0 || z==0){
        cout<<s.length()<<endl;
        return;
    }
    string t="";

    for(int i=0;i<s.length();i++){
        if(s[i]=='1' && z<1){
            break;
        }
        if(s[i]=='0' && o<1){
            break;
        }
        if(s[i]=='1' && z>0){
            t += '0';
            z--;
        }
        else if(s[i]=='0' && o>0){
            t += '1';
            o--;
        }
    }
    cout<<s.length()-t.length()<<endl;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}