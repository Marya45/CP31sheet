#include<bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

void solve(){
    int n;
    cin>>n;
    vector<vector<char>> mat(n, vector<char>(n));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    } 
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int c0 = 0, c1 = 0;
            if (mat[i][j] == '0')
                c0++;
            else
                c1++;

            if (mat[j][n - i - 1] == '0')
                c0++;
            else
                c1++;

            if (mat[n - i - 1][n - j - 1] == '0')
                c0++;
            else
                c1++;

            if (mat[n - j - 1][i] == '0')
                c0++;
            else
                c1++;

            if ((c0 == 0) or (c1 == 0))
                continue;

            if (c0 >= c1)
            {
                //! 1s are in minority, so change all 1s to 0s
                ans += c1;
                mat[i][j] = '0';
                mat[j][n - i - 1] = '0';
                mat[n - i - 1][n - j - 1] = '0';
                mat[n - j - 1][i] = '0';
            }
            else
            {
                //! 0s are in minority, so change all 0s to 1s
                ans += c0;
                mat[i][j] = '1';
                mat[j][n - i - 1] = '1';
                mat[n - i - 1][n - j - 1] = '1';
                mat[n - j - 1][i] = '1';
            }
        }
    }

    cout << ans << "\n";

}

// a1 a2 a3 a4      d1 c1 b1 a1     d4 d3 d2 d1     a4 b4 c4 d4
// b1 b2 b3 b4      d2 c2 b2 a2     c4 c3 c2 c1     a3 b3 c3 d3
// c1 c2 c3 c4      d3 c3 b3 a3     b4 b3 b2 b1     a2 b2 c2 d2
// d1 d2 d3 d4      d4 c4 b4 a4     a4 a3 a2 a1     a1 b1 c1 d1

signed main(){
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}   