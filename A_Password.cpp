#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    int n;
    cin>>n;
    vector <int> v(n), v2;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }

    bool check = false;
    int x = 10-n, cnt = 0;
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            for (int k = 0; k < x; k++){
                for (int l = 0; l < x; l++){
                    if ((i == j && k == l && i != k) || (i == k && j == l && i != j) || (i == l && j == k && i != j)){

                        int z = i+(j*10)+(k*100)+(l*1000);
                        for (int m = 0; m < v2.size(); m++){
                            if (v2[m] == z)
                                check = true;
                        }
                        
                        if (!check)
                            v2.push_back(z);

                        check = false;
                    }
                }
            }
        }
    }

    cout<<v2.size();
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
        cout<<"\n";
    }

    return 0;
}
