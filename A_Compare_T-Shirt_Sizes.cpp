#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

void solve()
{
    string a, b;
    cin>>a>>b;

    if (a == b){
        cout<<"=";
    }
    else if (a[a.size()-1] == b[b.size()-1]){
        if (a[a.size()-1] == 'S'){
            if (a.size() > b.size()){
                cout<<"<";
            }
            else {
                cout<<">";
            }
        }
        else {
            if (a.size() > b.size()){
                cout<<">";
            }
            else {
                cout<<"<";
            }
        }
    }
    else {
        if (a[a.size()-1] == 'S'){
            cout<<"<";
        }
        else if (a[a.size()-1] == 'L'){
            cout<<">";
        }
        else {
            if (b[b.size()-1] == 'S'){
                cout<<">";
            }
            else {
                cout<<"<";
            }
        }
    }
   
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
