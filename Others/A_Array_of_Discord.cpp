#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    ll n;
    cin>>n;
 
    vector <string> a(n);
    vector <ll> v(n);
 
    for (int i = 0; i < n; i++){
        cin>>a[i];
        v[i] = stoll(a[i]);
    }
 

    ll sz, temp;
    string currStr;
    for (int i = 0; i < n; i++){
        currStr = a[i]; // str
        temp = v[i];
        sz = currStr.size();
 
        // 0 or 1
        if (sz == 1){
            v[i] = 0;
        }
        else{
            currStr[0] = '1';
            v[i] = stoll(currStr);
        }
 
        if (!is_sorted(v.begin(), v.end())){
            for (auto &&it : v){
                cout<<it<<" ";
            }
            return;
        }
 
        //9
        currStr[0] = '9';
        v[i] = stoll(currStr);
 
        if (!is_sorted(v.begin(), v.end())){
            for (auto &&it : v){
                cout<<it<<" ";
            }
            return;
        }
 
        v[i] = temp;
    }
 
    cout<<"impossible";    
}

int main()
{
    Shah_Sayem

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }

    return 0;
}
