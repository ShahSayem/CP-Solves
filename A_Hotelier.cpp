#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;
bool location[10];

void solve()
{
    int n;
    cin>>n;

    string s;
    cin>>s;
    int idxL = 0, idxR = 9;

    for (int i = 0; i < n; i++){
        idxL = 0, idxR = 9;
        if (s[i] == 'L'){
            while (idxL < 10){
                if (!location[idxL]){
                    location[idxL] = 1;
                    break;
                }

                idxL++;
            }
        }
        else if (s[i] == 'R'){
            while (idxR >= 0){
                if (!location[idxR]){
                    location[idxR] = 1;
                    break;
                }

                idxR--;
            }
        }
        else {
            location[s[i]-'0'] = 0;
        }
    }

    for (int i = 0; i < 10; i++){
        cout<<location[i];
    }    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
