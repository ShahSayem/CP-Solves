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
    vector <bool> check(800, true);
    int n, x, temp, temp2;
    cin>>n;

    if (n == 0){
        cout<<1;
        return;
    }
    else if (n == 1){
        cout<<2;
        return;
    }

    vector <int> v;
    for (int i = 0; i < n; i++){
        cin>>x;
        x %= 360;

        if (x < 0){
            temp = -1*x;
            temp += 360;

            if (temp > 180){
                temp2 = temp-180;
            }
            else {
                temp2 = temp+180;
            }

            if (!check[temp] || !check[temp2]){
                check[temp] = false;
                check[temp2] = false;
            }
            else {
                v.push_back(x);
                check[temp] = false;
                check[temp2] = false;
            }
        }
        else {
            if (x > 180){
                temp2 = x-180;
            }
            else {
                temp2 = x+180;
            }

            if (!check[x] || !check[temp2]){
                check[x] = false;
                check[temp2] = false;
            }
            else {
                v.push_back(x);
                check[x] = false;
                check[temp2] = false;
            }
        }
    }

    cout<<v.size()*2;
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
