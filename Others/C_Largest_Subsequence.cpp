#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    string s;

    cin>>n>>s;

    char mx= s[n-1];
    vector <int> subseq;
    for (int i = n-1; i >= 0; i--){
        if (s[i] >= mx){
            subseq.push_back(i);
            mx= s[i];
        }    
    }
    reverse(subseq.begin(), subseq.end());
    
    int sz = subseq.size(), j;
    for (int i = 0; i < sz; i++){
        j = sz-i-1;
        if (subseq[i] < subseq[j])
            swap(s[subseq[i]], s[subseq[j]]);
        else 
            break;
    }
    
    if (is_sorted(s.begin(), s.end()))
        cout<<sz-(count(s.begin(), s.end(), mx));
    else 
        cout<<-1;
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
