#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    string a = "", b = "", x, y;
    getline(cin, x);
    getline(cin, y);

    for (int i = 0; i < x.size(); i++){
        if (x[i] != ' ')
            a += x[i];
    }

    for (int i = 0; i < y.size(); i++){
        if (y[i] != ' ')
            b += y[i];
    }
    
    map <char, int> mp;
    mp['2'] = 1, mp['3'] = 2, mp['4'] = 3, mp['5'] = 4;
    mp['6'] = 5, mp['7'] = 6, mp['8'] = 7, mp['9'] = 8;
    mp['T'] = 9, mp['J'] = 10, mp['Q'] = 11, mp['K'] = 12, mp['A'] = 13;

    int n = a.size(), m = b.size();
    for (int i = 0; i < min(n, m); i++){
        if (mp[a[i]] < mp[b[i]]){
            b += a[i];
            m++;
        }
        else if (mp[a[i]] > mp[b[i]]){
            a += b[i];
            n++;
        }
        else {
            a += a[i];
            b += b[i];

            n++, m++;
        }

        if (i > 1e6){
            cout<<"draw";
            return;
        }
    }
    
    if (n > m){
        cout<<"player 1";
    }
    else if (n < m){
        cout<<"player 2";
    }
    else {
        cout<<"draw";
    }

    // cout<<n<<" "<<m;
    //cout<<a<<"\n"<<b;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    cin.ignore();
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
