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
    int n;
    cin>>n;
    vector <int> v(n), v2;
    for (int i = 0; i < n; i++){
        cin>>v[i];
        v2.push_back(v[i]);
    }
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                if (v[i] > v[j]){
                    v[i] = v[i]+v[j];
                }
                else 
                    swap(v[j], v[k]);
            }

            int cnt = 0;
            for (int l = 0; l < n; l++){
                if (v[i] != v2[i]){
                    break;
                }
                else 
                    cnt++;
            }
            
            if (cnt == n){
                cout<<"YES";
                return;
            }

        }
    }

    cout<<"NO";
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
