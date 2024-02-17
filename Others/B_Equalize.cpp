#include <bits/stdc++.h>
using namespace std;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;
const ll MOD = 1e9+7;
const int MAX = 1e7+5;


void solve()
{
    int n, temp = n, curr = -1, cnt = 1;
    cin>>n;

    map <int, int> mp;
    set <int> st;
    vector <int> v(n), nums(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];

        st.insert(i+1);
        //mp[i+1] = 1;
        //nums[i] = temp--;
    }
    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n-1; i+=2){
        if (binary_search(st.begin(), st.end(), *st.begin()+(v[i]-v[i+1]))){
            cnt++;
            st.erase(st.begin());
            st.erase(st.find(*st.begin()+(v[i]-v[i+1])));

            v[i] += (*st.begin());
            v[i+1] += (*st.begin()+(v[i]-v[i+1]));
        }
        else {
            v[i] += (*st.begin());
            st.erase(st.begin());

            v[i] += (*st.begin());
            st.erase(st.begin());
        }
    }

    int ans = 1;
    for (auto &&i : v){
        mp[i]++;

        ans = max(mp[i], ans);
    }
    

    cout<<ans;

    //cout<<*st.begin();
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
