#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, sum;
    cin>>n>>sum;

    if (sum == 0){
        if (n == 1)
            cout<<0<<" "<<0;
        else 
            cout<<-1<<" "<<-1;

        return;
    }

    
    string mxAns = "", mnAns = "";
    int mx = 9, temp = sum, rem;
    while (temp){
        if (mx <= temp){
            rem = temp%mx;
            temp = temp/mx;

            while (temp--){
                mxAns += to_string(mx);

                if (mxAns.size() > n){
                    cout<<-1<<" "<<-1;
                    return;
                }
            }
            temp = rem;
        }

        mx--;
    }
    
    int sz = mxAns.size();
    if (sz < n){
        while (sz != n){
            mxAns += '0';
            sz++;
        }
    }

    mnAns = mxAns;
    reverse(mnAns.begin(), mnAns.end());

    if (mnAns[0] == '0'){
        mnAns[0]++;

        for (int i = 1; i < sz; i++){
            if (mnAns[i] != '0') {
                mnAns[i]--;
                break;
            } 
        }
    }
    cout<<mnAns<<" "<<mxAns;
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
