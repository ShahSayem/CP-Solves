#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
template <typename T> using mset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define Shah_Sayem ios_base::sync_with_stdio(false);cin.tie(NULL);

struct Two
{
    int f, s;
};


int main()
{
    Shah_Sayem

    int n;
    cin>>n;

    vector <Two> v(n);
    mset <int> ms;
    for (int i = 0; i < n; i++){
        cin>>v[i].f>>v[i].s;
        ms.insert(v[i].f);
        ms.insert(v[i].s);
    }
    
    int x, y;
    for (int i = 0; i < n; i++){
        x = ms.order_of_key(v[i].f);
        y = ms.order_of_key(v[i].s);

        cout<<(y-x-1)/2<<"\n";
    }

    return 0;
}
