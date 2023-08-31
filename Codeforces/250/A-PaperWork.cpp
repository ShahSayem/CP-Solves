#include <bits/stdc++.h>
using namespace std;
 
#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long ll;


void solve()
{
    int n;
    cin>>n;

    std::vector<int> v(n), vec;
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }

    int cnt = 0, temp = 0, seg = 0;
    for (int i = 0; i < n; ++i)
    {
        seg++;

        if (v[i] < 0){
            temp++;
        }

        if(temp > 2){
            vec.push_back(seg-1);
            cnt++;
            temp = 1;
            seg = 1;
        }
    }

    if (seg){
        vec.push_back(seg);
        cnt++;
    }

    cout<<cnt<<"\n";
    for (auto it: vec){
        cout<<it<<" ";  
    }
}
 
int main()
{
    Shah_Sayem
    #ifndef ONLINE_JUDGE
        freopen("Input.txt", "r", stdin);
        freopen("Output.txt", "w", stdout);
        freopen("Error.txt", "w", stderr);
    #endif

    int tc = 1;
    //cin>>tc;
    while (tc--){
        solve();
        cout<<"\n";
    }
 
    return 0;
}