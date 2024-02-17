#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    //  0  1
    int n, m, idx1 = 0, idx0 = 0;
    cin>>n>>m;

    string s = "";
    if (m > n){
        while (m && n){
            if (m > n){
                m -= 2;
                n--;

                s += "11";
                s+= '0';
            }
            else {
                m--, n--;

                s += "1";
                s+= '0';
            }
        }

        if (m && m <= 2){
            for (int i = 0; i < m; i++){
                s += '1';
            }

            m = 0;
        }
        else if (n == 1){
            s += '0';
            n--;
        }
    }      //1    0
    else { //m <= n
        while (m && n){
            m--, n--;

            s += '0';
            s+= '1';
        } 

        if (n == 1){
            s += '0';
            n--;
        }      
    }

    
    if(m || n){
        //cout<<n<<" "<<m;
        cout<<-1;
    }
    else {
        cout<<s;
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
