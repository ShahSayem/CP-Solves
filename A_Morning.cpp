#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
//typedef __int128 lll; //cpp20
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    string s;
    cin>>s;

    int curr = 0, ans = 0, target;
    vector <int> v = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 0};
    for (int i = 0; i < 4; i++){
        target = (s[i]-'0');

        //cout<<target<<" ";
        if ((target < v[curr] && target != 0) || v[curr] == 0){
            for (int j = curr; j >= 0; j--){
                if (v[j] == target){
                    ans++;
                    curr = j;

                    break;
                }
                else {
                    ans++;
                }
            }
        }
        else {
            for (int j = curr; j < 10; j++){
                if (v[j] == target){
                    ans++;
                    curr = j;

                    break;
                }
                else {
                    ans++;
                }
            }
        }
    }
    
    cout<<ans;
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
