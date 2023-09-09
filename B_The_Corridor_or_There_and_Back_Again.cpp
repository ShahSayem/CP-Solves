#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;

void solve()
{
    int n, k = 0, stop = INT_MAX, nextStep;
    cin>>n;

    vector <int> room(n), activation(n);
    for (int i = 0; i < n; i++){
        cin>>room[i]>>activation[i];

        if (room[i] >= stop)
            continue;

        nextStep = ((activation[i]-2)/2)+((activation[i]-2)%2);
        stop = min(max(room[i]+nextStep, room[i]), stop);

        //cout<<stop<<" ";
    }
    
    cout<<stop;
    
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
