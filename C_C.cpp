#include <bits/stdc++.h>
using namespace std;
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

bool isPossible(int idx, int c, vector <int> &v){
    int n = v.size();

    for (int i = 0; i < n; i++){

    }
    
    return false;
}
 
int val(int c, vector <int> &v)
{
    int sz = v.size();
    int l = 1, r = sz-1, mid, sum;
    while (l <= r){
        mid = l+(r-l)/2;
        sum = isPossible(mid, c, v);
        //cout<<l<<" "<<r<<" "<<mid<<"\n";
 
        if (sum == c){
            return mid;
        }
        else if (sum > c){
            r = mid-1;
        }
        else {
            l = mid+1;
        }
    }
}

void solve()
{
    int n, b;
    cin>>n>>b;

    vector <int> v(n), vec;
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    int x;
    for (int i = 0; i < n; i++){

        if ()
        x = v[i] & b;
        if (x == b){
            vec.push_back(v[i]);
            // cout<<v[i]<<" "<<b<<"\n";
        }
    }
    // cout<<"\n";

    if (vec.size() == 1 && vec[0] != b){
        cout<<"NO";
    }
    else 
        cout<<"YES";

    // for (int i = 0; i < vec.size(); i++){
    //     cout<<vec[i]<<" ";
    // }
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
