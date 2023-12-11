#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    vector <int> v(3);
    cin>>v[0]>>v[1]>>v[2];

    sort(v.rbegin(), v.rend());

    bool flag = 0;
    if (v[0] == 6){
        if (v[1] == 3){
            if (v[2] != 0)
                flag = 1;
        }
        else if (v[1] == 1){
            if (v[2] != 1)
                flag = 1;
        }
        else {
            flag = 1;
        }
    }
    else if (v[0] == 4){
        if (v[1] == 4){
            if (v[2] != 0)
                flag = 1;
        }
        else if (v[1] == 3){
            if (v[2] !=1)
                flag = 1;
        }
        else {
            flag = 1;
        }
    }
    else if (v[0] == 3){
        if (v[1] == 3){
            if (v[2] != 3)
                flag = 1;
        }
        else if (v[1] == 1){
            if (v[2] != 1)
                flag = 1;
        }
        else {
            flag = 1;
        }
    }
    else if (v[0] == 2){
        if (v[1] == 2){
            if (v[2] != 2)
                flag = 1;
        }
        else {
            flag = 1;
        }
    }
    else {
        flag = 1;
    }

    if (flag){
        cout<<"invalidum";
    }
    else {
        cout<<"perfectus";
    }
}

int main()
{
    Shah_Sayem

    int tc = 1;
    cin>>tc;
    for (int i = 1; i <= tc; i++){
        cout<<"Case "<<i<<": ";
        solve();
        cout<<"\n";
    }

    return 0;
}
