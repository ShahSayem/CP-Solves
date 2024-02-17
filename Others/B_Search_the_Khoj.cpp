#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n;
    cin>>n;

    vector <string> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    //sort(v.begin(), v.end());

    string num;
    cin>>num;

    int cnt = 0;
    for (int i = 0; i < n; i++){
        cnt = 0;
        for (int j = 0; j < num.size(); j++){
            if (v[i][j] != num[j]){
                cnt++;
            }
        }
        
        if (cnt <= 1){
            cout<<v[i]<<"\n";
        }

        //cout<<v[i]<<" "<<cnt<<"\n";
    }    
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<":\n";
        solve();
        //cout<<"\n";
    }

    return 0;
}
