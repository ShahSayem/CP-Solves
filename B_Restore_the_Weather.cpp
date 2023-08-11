#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const int MAX = 10000000+5;


void solve()
{
    int n, k;
    cin>>n>>k;

    vector <int> estTemp(n);
    vector <int> temp(n);
    priority_queue <int, vector<int>, greater <>> ms;
    for (int i = 0; i < n; i++){
        cin>>estTemp[i];
        // estTemp[i].second = i;
    }
    // sort(estTemp.begin(), estTemp.end());

    for (int i = 0; i < n; i++){
        cin>>temp[i];
        ms.push(temp[i]);
    }
    // sort(temp.begin(), temp.end());

    int pos, target;
    for (int i = 0; i < n; i++){
        target = estTemp[i]-k;
        pos = lower_bound(temp.begin(), temp.end(), target+1)-temp.begin();

        cout<<temp[pos]<<" ";
    }
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
