#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

///.........Graph.........///
int X[] = {1, -1, 0, 0};
int Y[] = {0, 0, 1, -1};

void solve()
{
    string s;
    cin>>s;

    vector <int> v;
    vector <bool> check(100000, false);

    int cnt = 1, num = 0, fn = 0, x;
    for (int i = s.size()-1; i > -1; i--){
        if (s[i] != ','){
            x = s[i]-'0';
            num = x*cnt;
            cnt *= 10;

            fn += num;
        }
        else {
            if (!check[fn]){
                v.push_back(fn);
                check[fn] = true;
            }
            fn = 0;
            cnt = 1;
        }
        if (i == 0){
            if (!check[fn]){
                v.push_back(fn);
                check[fn] = true;
            }
        }
    }
    v.push_back(10000);
    sort(v.begin(), v.end());    

    bool start = false;
    int idx;
    cnt = 0;
    for (int i = 0; i < v.size()-1; i++){
        if (v[i] == v[i+1]-1){
            if (!start){
                idx = i;
                start = true;
            }
        }
        else {
            if (start){
                if (cnt)
                    cout<<",";
                
                cout<<v[idx]<<"-"<<v[i];
                start = false;
                cnt++;
            }
            else {
                if (cnt)
                    cout<<",";

                cout<<v[i];
                cnt++;
            }
            
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
}
