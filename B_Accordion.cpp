#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e4+5;

void solve()
{
    string s;
    cin>>s;

    int n = s.size(), leftBrac = -1, rightBrac = -1, leftCol = -1, rightCol = -1;
    for (int i = 0; i < n; i++){
        if (s[i] == '[' && leftBrac == -1){
            leftBrac = i;
        }

        if (s[i] == ':' && leftCol == -1 && leftBrac != -1){
            leftCol = i;
        }
    }
    
    for (int i = n-1; i >= 0; i--){
        if (s[i] == ']' && rightBrac == -1){
            rightBrac = i;
        }

        if (s[i] == ':' && (leftCol < i && leftCol != -1) && rightBrac != -1){
            //cout<<rightCol<<" "<<rightBrac<<" "<<leftCol<<"\n";
            rightCol = i;
            break;
        }
    }

    int ans = 4;
    if ((leftBrac != -1 && rightBrac != -1) && (leftCol != -1 && rightCol != -1)){
        for (int i = leftCol+1; i < rightCol; i++){
            if (s[i] == '|'){
                ans++;
            }
        }
        
        cout<<ans;
    }
    else {
        //cout<<leftBrac<<" "<<rightBrac<<" "<<leftCol<<" "<<rightCol;
        cout<<-1;
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        //cout<<"\n";
    }

    return 0;
}
